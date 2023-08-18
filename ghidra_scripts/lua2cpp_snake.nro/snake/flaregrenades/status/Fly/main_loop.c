
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSnakeFlaregrenades::status::Fly_main_loop
          (L2CWeaponSnakeFlaregrenades *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  undefined8 uVar10;
  long lVar11;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  ulong local_f0;
  ulong uStack232;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_GROUND_TOUCH_FLAG_LEFT);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,GROUND_TOUCH_FLAG_RIGHT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,_GROUND_TOUCH_FLAG_UP);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
        if ((bVar2 & 1U) == 0) goto LAB_710002a5b8;
        lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_UP);
        lib::L2CValue::operator_(aLStack112,aLStack160);
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_RIGHT);
        lib::L2CValue::operator_(aLStack112,aLStack160);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator_(aLStack112,aLStack160);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::operator_(aLStack112,aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack160);
LAB_710002a5b8:
  lib::L2CValue::L2CValue(aLStack160,0);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) == 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    uVar10 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,aLStack160);
    lib::L2CValue::L2CValue(aLStack80,aLStack144);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar5 = lib::L2CValue::as_number(pLVar6);
    lVar11 = lib::L2CValue::as_number(this_00);
    uVar3 = lib::L2CValue::as_number(aLStack80);
    local_f0 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack232 = (ulong)uVar3;
    app::lua_bind::KineticModule__reflect_speed_impl(this->moduleAccessor,(Vector3f *)&local_f0,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x13762d93e9);
    lib::L2CValue::L2CValue(aLStack80,0x16af6f16cc);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    uVar7 = lib::L2CValue::as_integer(aLStack80);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    uVar5 = lib::L2CValue::as_number(aLStack176);
    lVar11 = lib::L2CValue::as_number(aLStack176);
    uVar3 = lib::L2CValue::as_number(aLStack176);
    local_f0 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack232 = (ulong)uVar3;
    app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&local_f0,-1);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,GROUND_TOUCH_FLAG_DOWN);
    uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
      uVar5 = lib::L2CValue::operator__(aLStack80,(L2CValue *)&local_f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x13762d93e9);
        lib::L2CValue::L2CValue(aLStack80,0xa82c415c1);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
        uVar7 = lib::L2CValue::as_integer(aLStack80);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack192,fVar9);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::L2CValue(aLStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        uVar10 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
        lib::L2CValue::L2CValue((L2CValue *)&local_f0,(float)uVar10);
        lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar10 >> 0x20));
        lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&local_f0);
        lib::L2CValue::L2CValue(aLStack96,aLStack224);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack96,aLStack208);
        lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xa0);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack192);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::L2CValue(aLStack80,0x10bd9fefb9);
        HVar8 = lib::L2CValue::as_hash(aLStack80);
        iVar4 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar8,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack256,iVar4);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
      }
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_SNAKE_FLAREGRENADES_INSTANCE_WORK_ID_FLAG_STOP);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,0x13762d93e9);
      lib::L2CValue::L2CValue(aLStack176,0xd19a47f7f);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::operator_(aLStack80);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

