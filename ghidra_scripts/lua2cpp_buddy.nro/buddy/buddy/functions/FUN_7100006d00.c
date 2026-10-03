
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100006d00(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  Hash40 HVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar4);
  FUN_71000071a0(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
  lib::L2CValue::L2CValue(aLStack128,pLVar4);
  FUN_7100007320(aLStack112,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if (((bVar1 & 1U) == 0) &&
     (bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112), (bVar1 & 1U) == 0)) {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack144,HVar5);
    lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
    uVar6 = lib::L2CValue::operator==(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::MotionModule__remove_motion_partial_comp_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack64,false);
    bVar2 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::FighterMotionModuleImpl__set_blend_waist_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(bool)(bVar2 & 1));
    pLVar4 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,-1.0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack160,HVar5);
    lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
    uVar6 = lib::L2CValue::operator==(aLStack160,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      fVar7 = (float)app::lua_bind::MotionModule__frame_partial_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,fVar7);
      lib::L2CValue::operator=(aLStack144,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      fVar7 = (float)app::lua_bind::MotionModule__rate_partial_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack160,fVar7);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      lib::L2CValue::operator+(aLStack160,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_UPPER_RATE);
      fVar7 = (float)lib::L2CValue::as_number(aLStack176);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue(aLStack64,0.0);
    lib::L2CValue::operator+(aLStack144,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_SPECIAL_N_WORK_FLOAT_UPPER_FRAME);
    fVar7 = (float)lib::L2CValue::as_number(aLStack160);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar7,iVar3);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar4 = aLStack144;
  }
  lib::L2CValue::~L2CValue(pLVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

