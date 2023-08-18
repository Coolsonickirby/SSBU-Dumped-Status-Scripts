
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNRollAir_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [32];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar8 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack128,aLStack112);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,true);
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
  lib::L2CValue::L2CValue(aLStack176,fVar9);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar9 = (float)lib::L2CValue::as_number(aLStack176);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    fVar9 = (float)lib::L2CValue::as_number(aLStack176);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_71001b63d0(this);
  FUN_71001bb240(this);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack256 + 0x10),_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack256 + 0x10),_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::operator_(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack288 + 0x10),_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ADD_ANGLE);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,(int)pLVar7);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar9);
  lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar7);
  lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack192);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::operator_(aLStack224,aLStack208);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),aLStack224);
  FUN_71001b6c50(aLStack96,auStack256 + 0x10);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack288 + 0x10),_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack288 + 0x10));
  app::lua_bind::WorkModule__sub_int_impl(*ppBVar8,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack256,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar5 = lib::L2CValue::as_integer(pLVar7);
  uVar6 = app::sv_battle_object::kind(uVar5);
  pLVar7 = (L2CValue *)(uVar6 & 0xffffffff);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),(uint)pLVar7);
  fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack288,fVar9);
  lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar7);
  lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_STICK);
  iVar3 = lib::L2CValue::as_integer(aLStack320);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
  lib::L2CValue::L2CValue(aLStack304,fVar9);
  uVar6 = lib::L2CValue::operator_(aLStack304,aLStack96);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack288);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::operator_(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack304,1.0);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack320,fVar9);
    lib::L2CValue::_L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator__(aLStack320,aLStack304);
    if ((uVar6 & 1) == 0) {
      app::lua_bind::AttackModule__clear_all_impl(*ppBVar8);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
      fVar9 = (float)lib::L2CValue::as_number(aLStack304);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack304);
      lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack336);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_KIRBY);
      uVar6 = lib::L2CValue::operator__((L2CValue *)(auStack288 + 0x10),aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
        lib::L2CValue::L2CValue(aLStack352,false);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack352);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (*ppBVar8,iVar3,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
        lib::L2CValue::L2CValue(aLStack352,false);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack352);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (*ppBVar8,iVar3,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack336,(bool)(bVar1 & 1));
      }
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack144);
    if ((uVar6 & 1) == 0) {
      FUN_71001bcea0(this);
    }
    FUN_71001bd7e0(this);
  }
  else {
    uVar6 = lib::L2CValue::operator__(aLStack128,aLStack144);
    if ((uVar6 & 1) == 0) {
      FUN_71001bb590(this);
    }
    FUN_71001bbb40(this);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar3);
    lib::L2CValue::L2CValue(aLStack320,fVar9);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    uVar6 = lib::L2CValue::operator__(aLStack320,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator_(aLStack304,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,aLStack304);
    FUN_71001b5eb0(this,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack288);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

