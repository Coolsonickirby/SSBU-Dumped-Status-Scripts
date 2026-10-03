
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000eaf0(L2CFighterMiigunner *this,L2CValue *return_value)

{
  int iVar1;
  ShieldStatus SVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int in_stack_fffffffffffffea4;
  undefined in_stack_fffffffffffffeac;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_MIIGUNNER_ABSORBER_GROUP_SPECIAL_LW3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SHIELD_STATUS_NORMAL);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  SVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::AbsorberModule__set_status_impl(this->moduleAccessor,iVar1,SVar2,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIGUNNER_STATUS_ABSORBER_WORK_INT_EFFECT_HANDLE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar4 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    fVar7 = (float)app::lua_bind::MotionModule__trans_joint_scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::L2CValue(aLStack144,0x12c31b1d9c);
    lib::L2CValue::L2CValue(aLStack160,0x570211ebd);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,6.5);
    lib::L2CValue::operator*((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.9);
    lib::L2CValue::operator*((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    HVar6 = lib::L2CValue::as_hash(aLStack160);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    uVar9 = lib::L2CValue::as_number(aLStack192);
    uVar10 = lib::L2CValue::as_number(aLStack208);
    local_50 = CONCAT44(uVar9,uVar8);
    uStack72 = (ulong)uVar10;
    uVar8 = lib::L2CValue::as_number(aLStack224);
    uVar9 = lib::L2CValue::as_number(aLStack240);
    uVar10 = lib::L2CValue::as_number(aLStack256);
    local_60 = CONCAT44(uVar9,uVar8);
    uStack88 = (ulong)uVar10;
    fVar7 = (float)lib::L2CValue::as_number(aLStack272);
    uVar10 = app::lua_bind::EffectModule__req_follow_impl
                       (this->moduleAccessor,HVar5,HVar6,(Vector3f *)&local_50,(Vector3f *)&local_60
                        ,fVar7,false,0,0,-1,in_stack_fffffffffffffea4,0,
                        (bool)in_stack_fffffffffffffeac,false);
    lib::L2CValue::L2CValue(aLStack128,uVar10);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    app::lua_bind::EffectModule__enable_sync_init_pos_last_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_MIIGUNNER_STATUS_ABSORBER_WORK_INT_EFFECT_HANDLE);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

