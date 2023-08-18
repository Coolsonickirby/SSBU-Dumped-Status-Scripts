
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNTurn_main_loop(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  BattleObjectModuleAccessor *pBVar10;
  ulong uVar11;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  ppBVar12 = &this->moduleAccessor;
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) goto LAB_7100021f20;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lVar1 = -0x50;
      goto LAB_7100022154;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) goto LAB_7100021f28;
  }
  else {
LAB_7100021f20:
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100021f28:
    FUN_7100022fe0(this);
    bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack96,0x1c05577d15);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        HVar9 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar12,iVar4,HVar9,-1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack96,0x194d6048ba);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        HVar9 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar12,iVar4,HVar9,-1);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lVar1 = -0x40;
LAB_7100022154:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    }
  }
  iVar4 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar12);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar12,iVar4);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
    lib::L2CValue::L2CValue(aLStack112,iVar4);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar7 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
      app::FighterSpecializer_Purin::special_n_req_effect_dash_smoke(pBVar10);
      lib::L2CValue::L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack144,0x11b6d6f0f3);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      uVar11 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar12,uVar7,uVar11);
      lib::L2CValue::L2CValue(aLStack112,iVar4);
      lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::_L2CValue(aLStack96);
  iVar4 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar6 = lib::L2CValue::as_integer(pLVar8);
  uVar6 = app::sv_battle_object::kind(uVar6);
  lib::L2CValue::L2CValue(aLStack112,uVar6);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) goto LAB_7100022c1c;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_SPEED_GROUND);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED_BACKUP);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack144,fVar13);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar7 = lib::L2CValue::operator_(aLStack80,aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    pLVar8 = aLStack128;
    uVar7 = lib::L2CValue::operator_(aLStack80,pLVar8);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar8);
      lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack224,0xe4a39507f);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      uVar11 = lib::L2CValue::as_integer(aLStack224);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar11);
      lib::L2CValue::L2CValue(aLStack192,fVar13);
      pLVar8 = aLStack192;
      lib::L2CValue::operator_(aLStack144,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar8);
      uVar7 = lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
        uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_TURN);
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack176 + 0x10),
                     _FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_STATUS_PRE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)(auStack176 + 0x10));
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar2 & 1),iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_ROLL);
          lib::L2CValue::L2CValue(aLStack192,false);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = lib::L2CValue::as_bool(aLStack192);
          bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                            (*ppBVar12,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack176 + 0x10),
                     _FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_STATUS_PRE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)(auStack176 + 0x10));
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar2 & 1),iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack176,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_ROLL);
          lib::L2CValue::L2CValue(aLStack192,false);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = lib::L2CValue::as_bool(aLStack192);
          bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                            (*ppBVar12,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        }
        goto LAB_7100022bec;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    pLVar8 = aLStack80;
    uVar7 = lib::L2CValue::operator_(aLStack128,pLVar8);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) {
      lib::L2CAgent::math_abs((L2CAgent *)aLStack128,pLVar8);
      lib::L2CValue::L2CValue(aLStack208,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack224,0xe4a39507f);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      uVar11 = lib::L2CValue::as_integer(aLStack224);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar11);
      lib::L2CValue::L2CValue(aLStack192,fVar13);
      pLVar8 = aLStack192;
      lib::L2CValue::operator_(aLStack144,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar8);
      uVar7 = lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),aLStack80);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
        uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_TURN);
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack176 + 0x10),
                     _FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_STATUS_PRE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)(auStack176 + 0x10));
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar2 & 1),iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_ROLL);
          lib::L2CValue::L2CValue(aLStack192,false);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = lib::L2CValue::as_bool(aLStack192);
          bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                            (*ppBVar12,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack176 + 0x10),
                     _FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_STATUS_PRE);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack176 + 0x10));
          app::lua_bind::WorkModule__set_int_impl(*ppBVar12,iVar4,iVar5);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)auStack176,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue((L2CValue *)auStack176);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator_((L2CValue *)(auStack176 + 0x10),aLStack80);
          }
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_TURN);
          bVar2 = lib::L2CValue::as_bool((L2CValue *)(auStack176 + 0x10));
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_flag_impl(*ppBVar12,(bool)(bVar2 & 1),iVar4);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack176,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_ROLL);
          lib::L2CValue::L2CValue(aLStack192,false);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack176);
          bVar2 = lib::L2CValue::as_bool(aLStack192);
          bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                            (*ppBVar12,iVar4,(bool)(bVar2 & 1));
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        }
LAB_7100022bec:
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue((L2CValue *)auStack176);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
      }
    }
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100022c1c:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

