
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialHiEnd_main(L2CFighterRidley *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_FLAG_ENABLE_CONTROL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_INT_CHARGE_STATUS);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_F);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_B);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1bcdd13711);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      goto LAB_7100010460;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_HI);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1c76fe2f3e);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      goto LAB_7100010460;
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_LW);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x1ce89dd759);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      goto LAB_7100010460;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x1bcabcf308);
    lib::L2CValue::operator_(aLStack112,aLStack96);
LAB_7100010460:
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack144,1.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),false);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  fVar9 = (float)lib::L2CValue::as_number(aLStack144);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack176 + 0x10));
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0xd7577cbad);
  uVar4 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_F);
  uVar4 = lib::L2CValue::operator__(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_B);
    uVar4 = lib::L2CValue::operator__(pLVar7,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_HI_CHARGE_HI);
      uVar4 = lib::L2CValue::operator__(pLVar7,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0x102335c88f);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        pLVar7 = aLStack96;
        lib::L2CValue::operator_(aLStack144,pLVar7);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0x10bd5630e8);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar8);
        pLVar7 = aLStack96;
        lib::L2CValue::operator_(aLStack144,pLVar7);
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack192,0xf047d6da1);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      pLVar7 = aLStack96;
      lib::L2CValue::operator_(aLStack144,pLVar7);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0xf0310a9b8);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    pLVar7 = aLStack96;
    lib::L2CValue::operator_(aLStack144,pLVar7);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CAgent::math_rad((L2CAgent *)aLStack144,pLVar7);
  lib::L2CAgent::math_cos((L2CAgent *)auStack176,pLVar7);
  pLVar7 = aLStack96;
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),pLVar7);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_sin((L2CAgent *)auStack176,pLVar7);
  lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar4 = lib::L2CValue::operator_(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    lib::L2CValue::operator_(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack192,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar4 = lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack208,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar8 = (float)app::lua_bind::PostureModule__rot_x_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack224,fVar8);
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,uVar3);
  lib::L2CValue::L2CValue(aLStack96,180.0);
  uVar4 = lib::L2CValue::operator_(aLStack96,aLStack224);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,-180.0);
    uVar4 = lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_7100010a84;
    lib::L2CValue::L2CValue(aLStack96,360.0);
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack224,aLStack256);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,360.0);
    lib::L2CValue::operator_(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_(aLStack224,aLStack256);
  }
  lib::L2CValue::_L2CValue(aLStack256);
LAB_7100010a84:
  lib::L2CValue::operator_(aLStack224,aLStack240);
  lib::L2CValue::operator_(aLStack256);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator_(aLStack288,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE_SPEED_X);
  fVar8 = (float)lib::L2CValue::as_number(aLStack272);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(aLStack272,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack288,false);
    FUN_7100018c40(aLStack272,this,aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100019040);
  lib::L2CValue::operator_(pLVar7,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SpecialHiEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

