
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialNShoot_main(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue *this_00;
  Hash40 HVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
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
  
  FUN_710000b590(aLStack112,this);
  lib::L2CValue::L2CValue(aLStack128,0xa1b1b0ad5);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_S);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_M);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0xdd1d9fd51);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack144,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0xda6decdc7);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack144,aLStack96);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack176,0xd3fd79c7d);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator_(aLStack144,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,aLStack144);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_SUCCESS_SP);
  FUN_7100016db0(this,aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_HOP);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  ppBVar7 = &this->moduleAccessor;
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_ENABLE_CONTROL_ENERGY);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_CONTROL_ENERGY);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_REVERT_FALL_SPEED);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_FLAG_NORMAL_FALL_SPEED);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_S);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_SPECIAL_N_M);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xaf5156bf9);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar7,lVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xe0547016d);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar7,lVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0xdeddd7d8f);
      uVar3 = lib::L2CValue::as_integer(aLStack224);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
      fVar8 = (float)lib::L2CValue::as_number(aLStack192);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xa82125b6f);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar7,lVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xe724031fb);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
      lVar5 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar7,lVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0xd9ada4d19);
      uVar3 = lib::L2CValue::as_integer(aLStack224);
      uVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack208,fVar8);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator_(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
      fVar8 = (float)lib::L2CValue::as_number(aLStack192);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xa1b1b0ad5);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar7,lVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xeeb496041);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::WorkModule__set_int64_impl(*ppBVar7,lVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack240,0xd60d5707a);
    uVar3 = lib::L2CValue::as_integer(aLStack224);
    uVar4 = lib::L2CValue::as_integer(aLStack240);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar7,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_FLOAT_HOP_SPEED_Y);
    fVar8 = (float)lib::L2CValue::as_number(aLStack192);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_AIR_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack96,lVar5);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,1.0);
    lib::L2CValue::L2CValue(aLStack240,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack208);
    fVar9 = (float)lib::L2CValue::as_number(aLStack224);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_BRAVE_STATUS_SPECIAL_N_WORK_INT_SHOOT_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack192);
    lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack96,lVar5);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,1.0);
    lib::L2CValue::L2CValue(aLStack240,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack208);
    fVar9 = (float)lib::L2CValue::as_number(aLStack224);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_710002b420(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,SpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

