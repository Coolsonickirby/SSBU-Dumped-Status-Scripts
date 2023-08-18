
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::Guard_end(L2CFighterMetaknight *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Guard(this);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD_OFF);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GUARD_DAMAGE);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x6dd6b121a);
      lib::L2CValue::L2CValue(aLStack112,0xd6fdac86f);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      lVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::VisibilityModule__set_status_default_int64_impl
                (this->moduleAccessor,lVar4,lVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

