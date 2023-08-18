
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::Wait_main_loop(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000507f4;
  }
  lib::L2CValue::L2CValue
            (aLStack192,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_CURRENT);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_BORING_INDICATION);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_BORING_WAIT);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000507f4;
  }
  lib::L2CValue::L2CValue(aLStack176,0xcc40f4e28);
  lib::L2CValue::L2CValue(aLStack192,0x14a96c5752);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  uVar5 = lib::L2CValue::as_integer(aLStack192);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack80,20.0);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,0x289a9c79db);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_X);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::operator_(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::operator_(aLStack112);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  if ((bVar1 & 1U) == 0) {
LAB_71000501a8:
    lib::L2CValue::_L2CValue(aLStack176);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0x289a9c79db);
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_DOWN);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      goto LAB_71000501a8;
    }
    lua2cpp::L2CFighterBase::sub_situation_passible(this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack240);
    if ((bVar1 & 1U) == 0) {
      uVar4 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,0x32fefcf8dd);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack256);
      uVar4 = uVar4 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
    }
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_PASS);
      lib::L2CValue::L2CValue(aLStack176,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_71000507f4;
    }
  }
  lib::L2CValue::L2CValue
            (aLStack176,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_INT_OWNER_CONDITION_FOLLOW);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::operator_(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_MOVE_SHORT);
  uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack176,
               _WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_IS_SPECIAL_HI_DISABLE_AIR_FOLLOW);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack112);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack80);
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,0x289a9c79db);
        lib::L2CValue::L2CValue(aLStack208,_WEAPON_PIKMIN_PIKMIN_DIST_TARGET_TYPE_UP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW);
          lib::L2CValue::L2CValue(aLStack176,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_71000507f4;
        }
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_WAIT);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if (((uVar4 & 1) == 0) &&
       (bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112), (bVar1 & 1U) != 0)) {
      lib::L2CValue::L2CValue(aLStack176,0x29479ae28e);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_GROUND_FOLLOW);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_TURN);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_OWNER_CONDITION_DAMAGE_FLY);
        uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack192,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_AUTONOMY);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
          lib::L2CValue::operator_(aLStack176);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack192);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_AIR_FOLLOW);
            lib::L2CValue::L2CValue(aLStack176,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            goto LAB_71000507f4;
          }
        }
      }
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack192,_WEAPON_PIKMIN_PIKMIN_STATUS_WAIT_WORK_INT_NO_SLEEP_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack192);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        lib::L2CValue::L2CValue(aLStack80,0);
        bVar2 = lib::L2CValue::operator_(aLStack80,aLStack176);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        FUN_7100041980(this,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue
                (aLStack192,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLAG_TAKE_FROM_POCKET);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_DEATH);
        lib::L2CValue::L2CValue(aLStack192,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_APPROACH);
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_71000507f4:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

