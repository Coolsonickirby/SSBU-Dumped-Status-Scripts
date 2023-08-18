
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::KoopaSpecialN_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  uint uVar10;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_STEP);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  ppBVar8 = &this->moduleAccessor;
  iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_PREV_STEP);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
  uVar3 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_PREV_STEP);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_STEP_END);
    uVar3 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) != 0) {
      app::lua_bind::SoundModule__stop_status_se_impl(*ppBVar8);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_STEP_LOOP);
  uVar3 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLOAT_BREATH_SCALE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar1);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_MAIN_COUNT);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
    lib::L2CValue::L2CValue(aLStack160,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar3 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack208 + 0x10),_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_HANDLE);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
      lib::L2CValue::L2CValue(aLStack176,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
      uVar3 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_ID);
        iVar1 = lib::L2CValue::as_integer(aLStack176);
        lVar4 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar1);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,lVar4);
        lib::L2CValue::_L2CValue(aLStack176);
        HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_60);
        iVar1 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar8,HVar5,false,false,false);
        lib::L2CValue::L2CValue(aLStack176,iVar1);
        lib::L2CValue::operator_(aLStack144,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_HANDLE);
        iVar1 = lib::L2CValue::as_integer(aLStack144);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar2);
        lib::L2CValue::_L2CValue(aLStack176);
        iVar1 = lib::L2CValue::as_integer(aLStack144);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        app::lua_bind::SoundModule__set_se_vol_impl(*ppBVar8,iVar1,fVar9,0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_GENERATE_COUNT);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
    lib::L2CValue::L2CValue(aLStack176,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar3 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_FLAG_GENE_BREATH);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack208 + 0x10),_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_SE2_HANDLE);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)(auStack208 + 0x10));
      iVar1 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar1);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
      lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1);
      uVar3 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack224,0xd3a88aa6f);
        uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        uVar6 = lib::L2CValue::as_integer(aLStack224);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar9);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        uVar3 = lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack208);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)auStack208);
        }
        iVar1 = lib::L2CValue::as_integer(aLStack144);
        fVar9 = (float)lib::L2CValue::as_number((L2CValue *)(auStack208 + 0x10));
        app::lua_bind::SoundModule__set_se_vol_impl(*ppBVar8,iVar1,fVar9,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
        lib::L2CValue::operator_((L2CValue *)&local_60,aLStack128);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-600.0);
        lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack240);
        iVar1 = lib::L2CValue::as_integer(aLStack144);
        fVar9 = (float)lib::L2CValue::as_number(aLStack224);
        app::lua_bind::SoundModule__set_se_pitch_status_handle_impl(*ppBVar8,iVar1,fVar9);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,0xd28664d93);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar3 = lib::L2CValue::operator__((L2CValue *)(auStack208 + 0x10),aLStack176);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_GENERATE_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack160,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_MAIN_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar1,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_KOOPA_INSTANCE_WORK_ID_FLOAT_BREATH_SPEED_MUL);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar1);
    lib::L2CValue::L2CValue(aLStack176,fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.3);
      uVar3 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack240,0xe27c3a449);
        uVar3 = lib::L2CValue::as_integer(aLStack224);
        uVar6 = lib::L2CValue::as_integer(aLStack240);
        iVar1 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar3,uVar6);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,iVar1);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack208);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
        uVar3 = lib::L2CValue::operator__((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack208);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_CAMERA_QUAKE_KIND_SMALL_HF);
          iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
          app::lua_bind::CameraModule__req_quake_impl(*ppBVar8,iVar1);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        }
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_FLOAT_GENE_ANGLE);
    pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,(int)pLVar7);
    lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),fVar9);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar9);
    lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
    uVar3 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x85df0c8da);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar9);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack256,0xa9a1a5fc1);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar9);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack272,0x5228379c1);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::as_integer(aLStack272);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack256,fVar9);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack256,(L2CValue *)auStack208);
      lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),aLStack272);
      lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack288,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::operator_(aLStack240);
      lib::L2CValue::L2CValue(aLStack320,aLStack224);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
      lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_FLOAT_GENE_ANGLE);
      fVar9 = (float)lib::L2CValue::as_number(aLStack272);
      iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar1);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KOOPA_STATUS_BREATH_WORK_INT_HEAD_NODE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    lVar4 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar1);
    lib::L2CValue::L2CValue(aLStack224,lVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar3 = lib::L2CValue::operator__(aLStack224,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack256,0x97625f199);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar9);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::operator_((L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::operator_(aLStack352,aLStack240);
      lib::L2CValue::L2CValue(aLStack384,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack400,0xce6b26a7d);
      uVar3 = lib::L2CValue::as_integer(aLStack384);
      uVar6 = lib::L2CValue::as_integer(aLStack400);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar3,uVar6);
      lib::L2CValue::L2CValue(aLStack368,fVar9);
      lib::L2CValue::operator_((L2CValue *)&local_60,aLStack368);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack352);
      HVar5 = lib::L2CValue::as_hash(aLStack224);
      uVar3 = lib::L2CValue::as_number(aLStack256);
      lVar4 = lib::L2CValue::as_number(aLStack272);
      uVar10 = lib::L2CValue::as_number(aLStack336);
      local_60 = uVar3 & 0xffffffff | lVar4 << 0x20;
      uStack88 = (ulong)uVar10;
      app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar8,HVar5,(Vector3f *)&local_60,0,0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack208 + 0x10));
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

