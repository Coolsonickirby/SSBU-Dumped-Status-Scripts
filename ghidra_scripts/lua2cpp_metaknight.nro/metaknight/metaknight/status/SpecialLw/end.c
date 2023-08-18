
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialLw_end(L2CFighterMetaknight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  HitStatus HVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_STATUS_KIND_SPECIAL_LW_ATTACK);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_STATUS_KIND_SPECIAL_LW_END);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
      HVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar3,0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,true);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar4,0);
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::L2CValue(aLStack80,0x6dd6b121a);
      lib::L2CValue::L2CValue(aLStack96,0xd6fdac86f);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::VisibilityModule__set_status_default_int64_impl
                (this->moduleAccessor,lVar7,lVar8);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

