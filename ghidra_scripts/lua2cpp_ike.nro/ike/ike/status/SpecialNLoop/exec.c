
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterIke::status::SpecialNLoop_exec(L2CFighterIke *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
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
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100007370(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_IKE_STATUS_SPECIAL_N_WORK_FLOAT_CHARGE_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack112,aLStack96);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0x1a34f31694);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack176,0x1a535e36ac);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1);
  lib::L2CValue::operator_(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar5 = lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar5 = lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_IKE_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      goto LAB_71000056bc;
    }
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar5 = lib::L2CValue::operator__(aLStack176,aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) goto LAB_71000056cc;
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_IKE_STATUS_SPECIAL_N_FLAG_MAX_CHARGE_SOUND_DONE);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack176);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    iVar3 = FIGHTER_KIND_KIRBY;
    if ((bVar2 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      uVar5 = lib::L2CValue::operator__(aLStack80,pLVar7);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_MA_MSC_CMD_EFFECT_EFFECT);
        lib::L2CValue::L2CValue(aLStack192,0xfcb698218);
        lib::L2CValue::L2CValue(aLStack208,0x31ed91fca);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,18.0);
        lib::L2CValue::L2CValue(aLStack256,12.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,1.5);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CValue::L2CValue(aLStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lib::L2CValue::L2CValue(aLStack416,0.0);
        lib::L2CValue::L2CValue(aLStack432,true);
        FUN_71000074d0(aLStack80,this,aLStack176,aLStack192,aLStack208,aLStack224,aLStack240,
                       aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,aLStack336,aLStack352,
                       aLStack368,aLStack384,aLStack400,aLStack416,aLStack432);
      }
      else {
        lib::L2CValue::L2CValue(aLStack176,_MA_MSC_CMD_EFFECT_EFFECT);
        lib::L2CValue::L2CValue(aLStack192,0xfcb698218);
        lib::L2CValue::L2CValue(aLStack208,0x31ed91fca);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,10.0);
        lib::L2CValue::L2CValue(aLStack256,12.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,0.0);
        lib::L2CValue::L2CValue(aLStack320,1.5);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CValue::L2CValue(aLStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lib::L2CValue::L2CValue(aLStack416,0.0);
        lib::L2CValue::L2CValue(aLStack432,true);
        FUN_71000074d0(aLStack80,this,aLStack176,aLStack192,aLStack208,aLStack224,aLStack240,
                       aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,aLStack336,aLStack352,
                       aLStack368,aLStack384,aLStack400,aLStack416,aLStack432);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192,0x12316ebbc9);
      HVar8 = lib::L2CValue::as_hash(aLStack192);
      iVar3 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar8,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_IKE_STATUS_SPECIAL_N_FLAG_MAX_CHARGE_SOUND_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack192,2);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_IKE_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar7 = aLStack192;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_IKE_STATUS_SPECIAL_N_WORK_INT_READY_LEVEL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
LAB_71000056bc:
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar7 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar7);
LAB_71000056cc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

