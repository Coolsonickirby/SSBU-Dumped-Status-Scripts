
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterNess::status::SpecialLwHit_init(L2CFighterNess *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ShieldStatus SVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int in_stack_fffffffffffffdd4;
  undefined in_stack_fffffffffffffddc;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
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
  undefined8 local_60;
  ulong uStack88;
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack320,0xf60799e29);
  lib::L2CValue::L2CValue(aLStack336,_FIGHTER_NESS_ABSORBER_GROUP_SPECIAL_LW);
  lib::L2CValue::L2CValue(aLStack352,0x1755436656);
  lib::L2CValue::L2CValue(aLStack368,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_EFFECT_HANDLE);
  lib::L2CValue::L2CValue(aLStack384,0xe8e1a6dae);
  lib::L2CValue::L2CValue(aLStack400,0x13c2a982d2);
  lib::L2CValue::L2CValue(aLStack416,0x13b5aeb244);
  lib::L2CValue::L2CValue(aLStack432,0x132ca7e3fe);
  lib::L2CValue::L2CValue(aLStack448,_FIGHTER_NESS_STATUS_SPECIAL_LW_WORK_INT_SE_HANDLE);
  lib::L2CValue::L2CValue(aLStack464,0x133df7cdd3);
  lib::L2CValue::L2CValue(aLStack480,0x16b239f9f2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1018dfb2f4);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack320);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SHIELD_STATUS_NORMAL);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    SVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::AbsorberModule__set_status_impl(this->moduleAccessor,iVar2,SVar3,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1018dfb2f4);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar6 = lib::L2CValue::as_integer(aLStack352);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    iVar2 = lib::L2CValue::as_integer(aLStack368);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,0x570211ebd);
      lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      uVar6 = lib::L2CValue::as_integer(aLStack400);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::L2CValue(aLStack224,0x1018dfb2f4);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack416);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
      uVar5 = lib::L2CValue::as_integer(aLStack256);
      uVar6 = lib::L2CValue::as_integer(aLStack432);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack240,fVar9);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,0.0);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      HVar7 = lib::L2CValue::as_hash(aLStack384);
      HVar8 = lib::L2CValue::as_hash(aLStack160);
      uVar10 = lib::L2CValue::as_number(aLStack176);
      uVar11 = lib::L2CValue::as_number(aLStack208);
      uVar12 = lib::L2CValue::as_number(aLStack240);
      local_50 = CONCAT44(uVar11,uVar10);
      uStack72 = (ulong)uVar12;
      uVar10 = lib::L2CValue::as_number(aLStack272);
      uVar11 = lib::L2CValue::as_number(aLStack288);
      uVar12 = lib::L2CValue::as_number(aLStack304);
      local_60 = CONCAT44(uVar11,uVar10);
      uStack88 = (ulong)uVar12;
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      uVar12 = app::lua_bind::EffectModule__req_follow_impl
                         (this->moduleAccessor,HVar7,HVar8,(Vector3f *)&local_50,
                          (Vector3f *)&local_60,fVar9,false,0,0,-1,in_stack_fffffffffffffdd4,0,
                          (bool)in_stack_fffffffffffffddc,false);
      lib::L2CValue::L2CValue(aLStack144,uVar12);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack160);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      iVar4 = lib::L2CValue::as_integer(aLStack368);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
      lib::L2CValue::_L2CValue(aLStack144);
    }
  }
  iVar2 = lib::L2CValue::as_integer(aLStack448);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_LW_NO);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
    uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator_((L2CValue *)&local_60,aLStack464);
    }
    else {
      lib::L2CValue::operator_((L2CValue *)&local_60,aLStack480);
    }
    lib::L2CValue::L2CValue(aLStack144,true);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    iVar2 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar7,(bool)(bVar1 & 1),false,false,false,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
    lib::L2CValue::_L2CValue(aLStack144);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar4 = lib::L2CValue::as_integer(aLStack448);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

