
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPlizardon::status::SpecialN_exec(L2CFighterPlizardon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
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
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_STEP);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  ppBVar8 = &this->moduleAccessor;
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_PREV_STEP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_PREV_STEP);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_END);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      app::lua_bind::SoundModule__stop_status_se_impl(*ppBVar8);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_STEP_LOOP);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_INSTANCE_WORK_ID_FLOAT_BREATH_SCALE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_MAIN_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,3);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_SE2_HANDLE);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
      lib::L2CValue::L2CValue(aLStack144,iVar2);
      lib::L2CValue::L2CValue(aLStack80,-1);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_SE2_ID);
        iVar2 = lib::L2CValue::as_integer(aLStack144);
        lVar5 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar8,iVar2);
        lib::L2CValue::L2CValue(aLStack80,lVar5);
        lib::L2CValue::_L2CValue(aLStack144);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        iVar2 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar8,HVar6,false,false,false);
        lib::L2CValue::L2CValue(aLStack144,iVar2);
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_SE2_HANDLE);
        iVar2 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_SE2_HANDLE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,-1);
    uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0xd3a88aa6f);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar7);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack80);
      uVar4 = lib::L2CValue::operator_(aLStack160,aLStack176);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::operator_(aLStack160,aLStack176);
      }
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)lib::L2CValue::as_number(aLStack160);
      app::lua_bind::SoundModule__set_se_vol_impl(*ppBVar8,iVar2,fVar9,0);
      lib::L2CValue::L2CValue(aLStack192,1500.0);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::operator_(aLStack224,aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      fVar9 = (float)lib::L2CValue::as_number(aLStack208);
      app::lua_bind::SoundModule__set_se_pitch_status_impl(*ppBVar8,fVar9);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_GENERATE_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack160,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_FLAG_GENE_BREATH);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.5);
      uVar4 = lib::L2CValue::operator_(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0xc96fc43d6);
        lib::L2CValue::L2CValue(aLStack176,0);
        lib::L2CValue::L2CValue(aLStack192,true);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::ControlModule__set_rumble_impl
                  (*ppBVar8,HVar6,iVar2,(bool)(bVar1 & 1),0x50000000);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xa1194ba22);
        lib::L2CValue::L2CValue(aLStack176,0);
        lib::L2CValue::L2CValue(aLStack192,true);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::ControlModule__set_rumble_impl
                  (*ppBVar8,HVar6,iVar2,(bool)(bVar1 & 1),0x50000000);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack160,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0xd28664d93);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar4,uVar7);
    lib::L2CValue::L2CValue(aLStack176,iVar2);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack160);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::operator_(aLStack160,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_GENERATE_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::operator_(aLStack128,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PLIZARDON_STATUS_BREATH_WORK_INT_MAIN_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

