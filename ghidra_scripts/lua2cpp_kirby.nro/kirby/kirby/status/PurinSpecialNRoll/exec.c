
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNRoll_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  undefined auStack272 [16];
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
  
  ppBVar7 = &this->moduleAccessor;
  iVar2 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar3 = lib::L2CValue::as_integer(pLVar5);
  uVar3 = app::sv_battle_object::kind(uVar3);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  lib::L2CValue::L2CValue(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack160,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack176);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_71001b63d0(this);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack256 + 0x10),_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ANGLE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack256 + 0x10),_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack256 + 0x10));
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::operator_(aLStack192,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack272,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ADD_ANGLE);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack272);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,(int)pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar8);
  lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar5);
  lib::L2CValue::operator_((L2CValue *)(auStack256 + 0x10),aLStack192);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::operator_(aLStack224,aLStack208);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),aLStack224);
  FUN_71001b6c50(aLStack96,auStack256 + 0x10);
  lib::L2CValue::operator_(aLStack224,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack272);
  app::lua_bind::WorkModule__sub_int_impl(*ppBVar7,iVar2,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  pLVar5 = aLStack96;
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack256,pLVar5);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CHANGE_END);
    pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,(int)pLVar5);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  fVar8 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar7);
  lib::L2CValue::L2CValue((L2CValue *)auStack272,fVar8);
  lib::L2CAgent::math_abs((L2CAgent *)auStack272,pLVar5);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_STICK);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack288,fVar8);
  uVar6 = lib::L2CValue::operator_(aLStack288,aLStack96);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack272);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,1.0);
      lib::L2CValue::operator_(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack288,1.0);
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
    lib::L2CValue::L2CValue(aLStack304,fVar8);
    lib::L2CValue::_L2CValue(aLStack96);
    uVar6 = lib::L2CValue::operator__(aLStack304,aLStack288);
    if ((uVar6 & 1) == 0) {
      app::lua_bind::AttackModule__clear_all_impl(*ppBVar7);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
      fVar8 = (float)lib::L2CValue::as_number(aLStack288);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::operator_(aLStack288);
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
      fVar8 = (float)lib::L2CValue::as_number(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack320);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar7,fVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,FIGHTER_KIND_KIRBY);
      uVar6 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
        lib::L2CValue::L2CValue(aLStack336,false);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack336);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (*ppBVar7,iVar2,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
        lib::L2CValue::L2CValue(aLStack336,false);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        bVar1 = lib::L2CValue::as_bool(aLStack336);
        bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                          (*ppBVar7,iVar2,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
      }
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
  }
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack160);
    if ((uVar6 & 1) == 0) {
      FUN_71001bcea0(this);
    }
    FUN_71001bd7e0(this);
  }
  else {
    uVar6 = lib::L2CValue::operator__(aLStack144,aLStack160);
    if ((uVar6 & 1) == 0) {
      FUN_71001bb590(this);
    }
    FUN_71001bbb40(this);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack304,fVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,-1.0);
  uVar6 = lib::L2CValue::operator__(aLStack304,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator_(aLStack288,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,aLStack288);
  FUN_71001b5eb0(this,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack336);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar7,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
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

