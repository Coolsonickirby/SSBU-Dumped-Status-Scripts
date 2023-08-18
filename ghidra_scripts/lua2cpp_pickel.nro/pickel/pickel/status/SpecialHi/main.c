
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHi_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  bVar1 = app::FighterSpecializer_Pickel::check_material_special_hi_generate_fireworks(pBVar5);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x41f1b251e);
    lib::L2CValue::L2CValue(aLStack96,0x9b7a04434);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    lVar7 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar6,lVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_FIREWORKS);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x41f1b251e);
    lib::L2CValue::L2CValue(aLStack96,0xe1907eb55);
    lVar6 = lib::L2CValue::as_integer(aLStack80);
    lVar7 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar6,lVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_FIREWORKS);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_WAIT);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_JUMP);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

