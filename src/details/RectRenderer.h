#pragma once

#include <glpp/glpp.hpp>

namespace p6 {
namespace details {

class RectRenderer {
public:
    RectRenderer();
    void render() const;

private:
    glpp::UniqueVertexArray _vao;
    glpp::UniqueBuffer      _vbo;
    glpp::UniqueBuffer      _ibo;
};

} // namespace details
} // namespace p6