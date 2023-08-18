
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::SpecialHiBound_exec(L2CFighterFalco *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  Hash40 HVar6;
  Hash40MapEntry ***pppHVar7;
  L2CValue *pLVar8;
  float fVar9;
  undefined8 uVar10;
  long lVar11;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
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
  Hash40MapEntry **local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_SPECIAL_HI);
  uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_FALCO_STATUS_KIND_SPECIAL_HI_RUSH);
    uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_FALCO_STATUS_KIND_SPECIAL_HI_BOUND);
      lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_60);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLOAT_DIR);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
      lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack352,GROUND_TOUCH_FLAG_DOWN);
        uVar2 = lib::L2CValue::as_integer(aLStack352);
        uVar10 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar2);
        lib::L2CValue::L2CValue(aLStack400,(float)uVar10);
        lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar10 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack400);
        lib::L2CValue::L2CValue(aLStack112,aLStack384);
        pLVar8 = aLStack112;
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar8,0));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack352);
        pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
        lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10),pLVar3);
        pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
        lib::L2CValue::operator_(aLStack160,pLVar3);
        lib::L2CValue::operator_((L2CValue *)(auStack288 + 0x10));
        fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack368,fVar9);
        lib::L2CValue::operator_(aLStack352,aLStack368);
        lib::L2CAgent::math_atan((L2CAgent *)aLStack112,aLStack160,pLVar8);
        lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar1 = lib::L2CValue::as_integer(aLStack112);
        fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                 (this->moduleAccessor,iVar1);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
        lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar1 = lib::L2CValue::as_integer(aLStack112);
        fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                 (this->moduleAccessor,iVar1);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
        lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::operator_(aLStack304,aLStack304);
        lib::L2CValue::operator_(aLStack320,aLStack320);
        pLVar3 = aLStack368;
        lib::L2CValue::operator_(aLStack352,pLVar3);
        lib::L2CAgent::math_sqrt((L2CAgent *)aLStack112,pLVar3);
        pppHVar7 = &local_60;
        lib::L2CValue::operator_(aLStack176,(L2CValue *)pppHVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CAgent::math_cos((L2CAgent *)auStack288,(L2CValue *)pppHVar7);
        lib::L2CValue::operator_(aLStack176,aLStack352);
        lib::L2CValue::operator_(aLStack112,aLStack240);
        pppHVar7 = &local_60;
        lib::L2CValue::operator_(aLStack144,(L2CValue *)pppHVar7);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CAgent::math_sin((L2CAgent *)auStack288,(L2CValue *)pppHVar7);
        lib::L2CValue::operator_(aLStack176,aLStack112);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack336);
      }
      pLVar3 = (L2CValue *)0x31d39a761;
      lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
      lib::L2CAgent::math_deg((L2CAgent *)auStack288,pLVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
      lib::L2CValue::operator_((L2CValue *)&local_60,aLStack352);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      HVar6 = lib::L2CValue::as_hash(aLStack112);
      uVar4 = lib::L2CValue::as_number(aLStack336);
      lVar11 = lib::L2CValue::as_number(aLStack368);
      uVar2 = lib::L2CValue::as_number(aLStack416);
      local_60 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar11 << 0x20);
      uStack88 = (ulong)uVar2;
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (this->moduleAccessor,HVar6,(Vector3f *)&local_60,0,0);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack288,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_FLOAT_DIR);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_INT_RUSH_FRAME);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack336,0x150a6b9dca);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack336);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
      uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
        app::sv_kinetic_energy::set_brake(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack336);
        pLVar3 = aLStack112;
        goto LAB_7100008db0;
      }
      lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack336,0xfeb552ed0);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack336);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar9);
      pppHVar7 = &local_60;
      lib::L2CValue::operator_(aLStack224,(L2CValue *)pppHVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CAgent::math_cos((L2CAgent *)auStack288,(L2CValue *)pppHVar7);
      pLVar3 = aLStack336;
      lib::L2CValue::operator_(aLStack224,pLVar3);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
      pppHVar7 = &local_60;
      lib::L2CValue::operator_(aLStack256,(L2CValue *)pppHVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CAgent::math_sin((L2CAgent *)auStack288,(L2CValue *)pppHVar7);
      pLVar3 = aLStack336;
      lib::L2CValue::operator_(aLStack224,pLVar3);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar3);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
    }
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) goto LAB_7100008dbc;
    lib::L2CValue::L2CValue(aLStack336,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack352,0x11c7ce11e2);
    uVar4 = lib::L2CValue::as_integer(aLStack336);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar4 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_FALCO_FIRE_STATUS_WORK_ID_INT_STOP_Y_FRAME);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      uVar4 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        pLVar3 = aLStack112;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CValue::L2CValue(aLStack352,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack368,0xcdb915d50);
        uVar4 = lib::L2CValue::as_integer(aLStack352);
        uVar5 = lib::L2CValue::as_integer(aLStack368);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack336,fVar9);
        lib::L2CValue::operator_(aLStack336);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack368);
        pLVar3 = aLStack352;
      }
      lib::L2CValue::_L2CValue(pLVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack336,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack352,0xcac966dc6);
    uVar4 = lib::L2CValue::as_integer(aLStack336);
    uVar5 = lib::L2CValue::as_integer(aLStack352);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
    app::sv_kinetic_energy::set_brake(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack352);
    pLVar3 = aLStack336;
LAB_7100008db0:
    lib::L2CValue::_L2CValue(pLVar3);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_7100008dbc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

