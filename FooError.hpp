//
// Created by heckel on 20.11.2023.
//

#ifndef FOOERROR_HPP
#define FOOERROR_HPP

#include <system_error>

enum class FooError {
    Success = 0,
    UnknownDevice,
};

namespace std {
    template<>
    struct is_error_code_enum<FooError> : true_type {};
}  // namespace std

namespace detail {
    class FooErrorCategory : public std::error_category {
    public:
        const char *name() const noexcept override {
            return "FooError";
        }
        std::string message(int code) const override {
            return "Foo error";
        }
        std::error_condition default_error_condition(int code) const noexcept override {
            return {code, *this};
        }
        int id = 42;
    };
}
inline const detail::FooErrorCategory& FooErrorCategory() {
    static detail::FooErrorCategory instance{};
    return instance;
}
inline std::error_code make_error_code(FooError error) noexcept {
    return {static_cast<int>(error), FooErrorCategory()};
}


#endif //FOOERROR_HPP
