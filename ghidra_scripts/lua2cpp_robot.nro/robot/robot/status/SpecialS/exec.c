
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRobot::status::SpecialS_exec(L2CFighterRobot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  FighterKineticEnergyGravity *pFVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [32];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar10 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__status_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_S_ATTACK);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) goto LAB_710001bb88;
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_INT_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_SPD_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar11);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_INT_PUSH_B_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack192 + 0x10),iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_INT_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack192,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack96,pvVar6);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack224,0x1a306d9d7f);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    uVar7 = lib::L2CValue::as_integer(aLStack224);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack224,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack240,0);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar7 = lib::L2CValue::as_integer(aLStack240);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar11);
      lib::L2CValue::operator_((L2CValue *)auStack208);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
      pFVar8 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar8,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar9 = aLStack224;
    }
    else {
      lib::L2CValue::L2CValue(aLStack240,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack256,0);
      uVar5 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack224,fVar11);
      lib::L2CValue::operator_(aLStack224);
      lib::L2CValue::L2CValue(aLStack288,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack304,0xe27bcc115);
      uVar5 = lib::L2CValue::as_integer(aLStack288);
      uVar7 = lib::L2CValue::as_integer(aLStack304);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack272,fVar11);
      lib::L2CValue::operator_((L2CValue *)auStack208,aLStack272);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
      pFVar8 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar8,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar9 = aLStack240;
    }
    lib::L2CValue::_L2CValue(pLVar9);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack208,CONTROL_PAD_BUTTON_SPECIAL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)auStack192);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_FLAG_PUSH_B_RELEASE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0x140963d1be);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)(auStack192 + 0x10));
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    pLVar9 = (L2CValue *)auStack192;
LAB_710001b2b8:
    lib::L2CValue::_L2CValue(pLVar9);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_ROBOT_STATUS_ARMSPIN_FLAG_PUSH_B_RELEASE);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    if ((bVar2 & 1U) == 0) {
      uVar5 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_INT_PUSH_B_NUM);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack256,iVar3);
      lib::L2CValue::L2CValue(aLStack304,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack320,0xada0285e5);
      uVar5 = lib::L2CValue::as_integer(aLStack304);
      uVar7 = lib::L2CValue::as_integer(aLStack320);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack288,iVar3);
      uVar5 = lib::L2CValue::operator_(aLStack256,aLStack288);
      uVar5 = uVar5 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
    }
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack192,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)auStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack208,0xfea97fe73);
        lib::L2CValue::L2CValue(aLStack224,0x16f5156fbc);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack208);
        uVar7 = lib::L2CValue::as_integer(aLStack224);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar11);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack192);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue(aLStack96,1);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack192,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_INT_PUSH_B_NUM);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack192);
        app::lua_bind::WorkModule__add_int_impl(*ppBVar10,iVar3,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)auStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_FLAG_PUSH_B_RELEASE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
        pLVar9 = aLStack96;
        goto LAB_710001b2b8;
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0x140963d1be);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  uVar5 = lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_((L2CValue *)(auStack192 + 0x10),(L2CValue *)auStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_INT_PUSH_B_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack192 + 0x10));
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_SPIN);
  fVar11 = (float)lib::L2CValue::as_number(aLStack160);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__add_float_impl(*ppBVar10,fVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar11);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_STICK_);
  pLVar9 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,(int)pLVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar11);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar9);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  uVar5 = lib::L2CValue::operator_(aLStack96,aLStack224);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack240,0x164fbe4f35);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator_((L2CValue *)auStack208,aLStack224);
        lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0.0);
        uVar5 = lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,0.0);
          lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
          goto LAB_710001b944;
        }
      }
    }
    else {
      lib::L2CValue::operator_((L2CValue *)auStack208,aLStack224);
      lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)auStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0.0);
        lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
LAB_710001b944:
        pLVar9 = aLStack96;
        goto LAB_710001b970;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack288,0x178eaf7cdd);
    uVar5 = lib::L2CValue::as_integer(aLStack272);
    uVar7 = lib::L2CValue::as_integer(aLStack288);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    lib::L2CValue::operator_(aLStack256);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack192);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack304,fVar11);
    lib::L2CValue::operator_(aLStack96,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack96,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack256,0x1111ec22e9);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::operator_((L2CValue *)auStack208,aLStack224);
    pLVar9 = aLStack96;
    lib::L2CValue::operator_((L2CValue *)auStack208,pLVar9);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar9);
    uVar5 = lib::L2CValue::operator_(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar5 = lib::L2CValue::operator_((L2CValue *)auStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack256,aLStack240);
      }
      else {
        lib::L2CValue::operator_(aLStack240);
      }
      lib::L2CValue::operator_((L2CValue *)auStack208,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    pLVar9 = aLStack240;
LAB_710001b970:
    lib::L2CValue::_L2CValue(pLVar9);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_STICK_);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_710001a9f0(this);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_SPD_SUB_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar11);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack256,0x17c9df35b6);
  uVar5 = lib::L2CValue::as_integer(aLStack240);
  uVar7 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack224,iVar3);
  uVar5 = lib::L2CValue::operator__(aLStack224,aLStack144);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack256,0x181f90d213);
    uVar5 = lib::L2CValue::as_integer(aLStack240);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::operator_(aLStack96,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::operator_(aLStack160,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_SPD_Y);
  fVar11 = (float)lib::L2CValue::as_number(aLStack160);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack192 + 0x10));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710001bb88:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

