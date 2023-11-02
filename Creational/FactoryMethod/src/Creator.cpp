#include "Creator.hpp"

Creator::Creator() {}

Product* Creator::ProductFoo() {
    if (!m_product) { m_product.reset(MakeProduct()); }
    m_product->Foo();
    return m_product.get();
}

Product* Creator::ProductBar() {
    if (!m_product) { m_product.reset(MakeProduct()); }
    m_product->Bar();
    return m_product.get();
}

Product* Creator::GetProduct() {
    if (!m_product) { m_product.reset(MakeProduct()); }
    return m_product.get();
}
