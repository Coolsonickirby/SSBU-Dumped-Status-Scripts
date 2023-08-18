
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKoopajrCannonball::status::Shoot_main_loop
          (L2CWeaponKoopajrCannonball *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  undefined8 uVar7;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),iVar3);
  lib::L2CValue::L2CValue(aLStack144,0);
  uVar5 = lib::L2CValue::operator__((L2CValue *)(auStack208 + 0x10),aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),_GROUND_TOUCH_FLAG_ALL);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
    bVar1 = app::lua_bind::GroundModule__is_wall_touch_line_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      bVar1 = app::lua_bind::GroundModule__is_floor_touch_line_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0x2f89bbb63a);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack208 + 0x10));
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
        lib::L2CValue::L2CValue
                  ((L2CValue *)(auStack208 + 0x10),_WEAPON_KOOPAJR_CANNONBALL_STATUS_KIND_HOP);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0xb0);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
        goto LAB_7100019e34;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      uVar7 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack144,(float)uVar7);
      lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar7 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),aLStack144);
      lib::L2CValue::L2CValue(aLStack80,aLStack128);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x40,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      uVar7 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),(float)uVar7);
      lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar7 >> 0x20));
      lib::L2CValue::L2CValue(aLStack80,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::L2CValue(aLStack96,aLStack176);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::L2CValue(aLStack224,aLStack160);
      lib::L2CValue::L2CValue(aLStack256,aLStack112);
      lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0x0);
      pLVar6 = aLStack224;
      lua2cpp::L2CFighterBase::Vector2__dot(this,SUB81(pLVar6,0),(L2CValue)0x10);
      lib::L2CAgent::math_acos((L2CAgent *)auStack208,pLVar6);
      lib::L2CAgent::math_deg((L2CAgent *)aLStack80,pLVar6);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar6);
      lib::L2CValue::L2CValue(aLStack80,90.0);
      uVar5 = lib::L2CValue::operator_(aLStack80,(L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_FLAG_HOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KOOPAJR_CANNONBALL_INSTANCE_WORK_ID_FLAG_HIT_WALL)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KOOPAJR_CANNONBALL_STATUS_KIND_HOP);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        return;
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    iVar3 = 0;
  }
  else {
    FUN_71000192d0(this);
LAB_7100019e34:
    iVar3 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

