
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRefletThunder::status::Tron0_main_loop(L2CWeaponRefletThunder *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_REFLET_THUNDER_INSTANCE_WORK_ID_FLAG_IS_REFLECT);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_71000355a8;
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_REFLET_THUNDER_INSTANCE_WORK_ID_FLOAT_TRON_X_LENGTH);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_REFLET_THUNDER_INSTANCE_WORK_ID_FLOAT_TRON_X_ORIGINAL_LENGTH);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar5 = lib::L2CValue::operator_(aLStack64,aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    if (((uVar5 & 1) != 0) &&
       (uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80), (uVar5 & 1) != 0)) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_REFLET_THUNDER_STATUS_KIND_TRON1);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      return;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_REFLET_THUNDER_STATUS_KIND_TRON_VANISH);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_71000355a8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

