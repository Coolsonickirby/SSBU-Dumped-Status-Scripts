
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterArrow1::status::Vanish_main_loop(L2CWeaponMasterArrow1 *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_ALL);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_MASTER_ARROW1_STATUS_WORK_ID_FLAG_HIT_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_ARROW1_STATUS_WORK_ID_FLAG_HIT_GROUND);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xc1ab58644);
    lib::L2CValue::L2CValue(aLStack96,0xc0a924dbc);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack64,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    uVar5 = lib::L2CValue::operator__(aLStack64,pLVar7);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_MASTER_ARROW1_STATUS_KIND_STAY);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

