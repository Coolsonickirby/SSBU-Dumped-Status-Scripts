
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponBuddyPad::status::Bound_init(L2CWeaponBuddyPad *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  L2CValue *this_01;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
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
  
  this_01 = aLStack224;
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  ppBVar7 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x922b0515c);
    lib::L2CValue::L2CValue(aLStack144,0xb5d87491c);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator_(aLStack96,aLStack80);
LAB_7100035f10:
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    this_00 = aLStack128;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_LEANING_TO_THE_LEFT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_LEANING_TO_THE_RIGHT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack128,0x922b0515c);
        lib::L2CValue::L2CValue(aLStack144,0xd2663f2da);
        uVar4 = lib::L2CValue::as_integer(aLStack128);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar8);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        goto LAB_7100035f10;
      }
      lib::L2CValue::L2CValue(aLStack128,0x922b0515c);
      lib::L2CValue::L2CValue(aLStack144,0x130437f364);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,0x922b0515c);
      lib::L2CValue::L2CValue(aLStack160,0x137330c3f2);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar8);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack176,fVar8);
      lib::L2CValue::operator_(aLStack128,aLStack176);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,0x922b0515c);
      lib::L2CValue::L2CValue(aLStack144,0x12a51a550a);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144,0x922b0515c);
      lib::L2CValue::L2CValue(aLStack160,0x12d21d659c);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar8);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack176,fVar8);
      lib::L2CValue::operator_(aLStack128,aLStack176);
      lib::L2CValue::operator_(aLStack112,aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    this_00 = aLStack144;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) goto LAB_71000364b4;
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack80,0x66933a7e6);
  HVar6 = lib::L2CValue::as_hash(aLStack80);
  fVar8 = (float)app::sv_math::randf(HVar6,1.0);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_LEANING_TO_THE_LEFT);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_BUDDY_PAD_STATUS_WORK_FLAG_FALL_LEANING_TO_THE_RIGHT)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0x922b0515c);
      lib::L2CValue::L2CValue(aLStack176,0x160f64d2ab);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar5 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar8);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack176,0x922b0515c);
      lib::L2CValue::L2CValue(aLStack192,0x163369edf2);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack160,fVar8);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::operator_(aLStack160,aLStack80);
      lib::L2CValue::operator_(aLStack224,aLStack144);
      lib::L2CValue::operator_(aLStack80,aLStack208);
      lib::L2CValue::operator_(aLStack192);
      lib::L2CValue::operator_(aLStack128,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      goto LAB_7100036428;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0x922b0515c);
    lib::L2CValue::L2CValue(aLStack176,0x15f0af733a);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0x922b0515c);
    lib::L2CValue::L2CValue(aLStack192,0x15cca24c63);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    uVar5 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::operator_(aLStack208,aLStack144);
    lib::L2CValue::operator_(aLStack80,aLStack192);
    lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    this_01 = aLStack208;
LAB_7100036428:
    lib::L2CValue::_L2CValue(this_01);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_BUDDY_PAD_INSTANCE_WORK_ID_FLOAT_DEGREE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack160);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_71000364b4:
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,0x922b0515c);
  lib::L2CValue::L2CValue(aLStack144,0x75a1d25a7);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack80,fVar8);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::operator_(aLStack80);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144,0x922b0515c);
  lib::L2CValue::L2CValue(aLStack160,0x12f43d8b78);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CValue::L2CValue(aLStack160,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

