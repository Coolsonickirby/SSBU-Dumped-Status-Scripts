
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMurabito::status::SpecialLw_pre(L2CFighterMurabito *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_GENERATE_ARTICLE_TREE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_GENERATE_ARTICLE_SPROUT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_PLANT);
        lib::L2CValue::operator_(aLStack80,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_PLANT_FAIL);
        lib::L2CValue::operator_(aLStack80,aLStack64);
      }
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_AIR);
        lib::L2CValue::operator_(aLStack80,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_WATER_WAIT);
        lib::L2CValue::operator_(aLStack80,aLStack64);
      }
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,false);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::ItemModule__set_have_item_visibility_impl
                (this->moduleAccessor,(bool)(bVar1 & 1),0);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,false);
      bVar1 = lib::L2CValue::as_bool(aLStack64);
      app::lua_bind::ItemModule__set_change_status_event_impl
                (this->moduleAccessor,(bool)(bVar1 & 1));
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MURABITO_STATUS_KIND_SPECIAL_LW_DEFOREST);
    lib::L2CValue::operator_(aLStack80,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

