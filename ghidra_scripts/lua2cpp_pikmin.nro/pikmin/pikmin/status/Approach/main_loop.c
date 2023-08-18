
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::Approach_main_loop
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  FUN_710004ba80(aLStack64,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_FOLLOW);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_WAIT);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      FUN_710004c3a0(aLStack64,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x29479ae28e);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack64,fVar4);
          lib::L2CValue::L2CValue
                    (aLStack112,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_LR_FOLLOW);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack96,fVar4);
          uVar3 = lib::L2CValue::operator__(aLStack64,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_TURN);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_710004b99c;
          }
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_MOVE_SHORT);
          uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
          lib::L2CValue::_L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_TURN);
            lib::L2CValue::L2CValue(aLStack96,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack64);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_710004b99c;
          }
        }
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_MOVE);
        uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_GROUND_FOLLOW);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack64);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_710004b99c:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

