
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDollyFire::status::Hit_main_loop(L2CWeaponDollyFire *this,L2CValue *return_value)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack192,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,5);
    uVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar2);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  iVar3 = app::lua_bind::GroundModule__get_touch_moment_flag_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack192,0);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar5 & 1) == 0) {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::L2CValue(aLStack192,-1.0);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar5 & 1) == 0) {
      bVar1 = false;
LAB_7100034170:
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::L2CValue(aLStack192,1.0);
      uVar5 = lib::L2CValue::operator__(aLStack112,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_RIGHT);
        lib::L2CValue::operator_(aLStack128,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar2 = lib::L2CValue::operator__(aLStack160,aLStack192);
        uVar2 = uVar2 ^ 1;
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      if (bVar1) {
        lib::L2CValue::_L2CValue(aLStack144);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_DOWN);
        lib::L2CValue::operator_(aLStack128,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack192,0);
        uVar5 = lib::L2CValue::operator__(aLStack96,aLStack192);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) goto LAB_71000340d0;
        lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),GROUND_TOUCH_FLAG_DOWN);
        uVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
        uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar2);
        lib::L2CValue::L2CValue(aLStack192,(float)uVar9);
        lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar9 >> 0x20));
        lib::L2CValue::L2CValue(aLStack96,aLStack192);
        lib::L2CValue::L2CValue(aLStack112,aLStack176);
        pLVar7 = aLStack112;
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar7,0));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack112,pLVar4);
        pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),pLVar4);
        lib::L2CAgent::math_atan((L2CAgent *)aLStack112,(L2CValue *)(auStack224 + 0x10),pLVar7);
        fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack240,fVar8);
        pLVar4 = aLStack240;
        lib::L2CValue::operator_(aLStack96,pLVar4);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar4);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator_(aLStack240,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DOLLY_FIRE_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
        fVar8 = (float)lib::L2CValue::as_number(aLStack256);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack96,0xaeadc3bf8);
        lib::L2CValue::L2CValue(aLStack272,0x1d5e336640);
        uVar5 = lib::L2CValue::as_integer(aLStack96);
        uVar6 = lib::L2CValue::as_integer(aLStack272);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack256,fVar8);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack96);
        uVar5 = lib::L2CValue::operator__(aLStack256,aLStack240);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::operator_(aLStack256);
          uVar5 = lib::L2CValue::operator__(aLStack240,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) goto LAB_7100034684;
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CValue::L2CValue(aLStack288,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          bVar1 = false;
        }
        else {
          pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
            lib::L2CValue::L2CValue(aLStack272,0.0);
            lib::L2CValue::L2CValue(aLStack288,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack96);
          }
LAB_7100034684:
          bVar1 = true;
        }
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack160);
        if (!bVar1) goto LAB_71000345b0;
        goto LAB_71000340d0;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator_(aLStack128,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack192);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) != 0) {
        bVar1 = true;
        goto LAB_7100034170;
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
LAB_71000340d0:
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_71000345b0:
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

