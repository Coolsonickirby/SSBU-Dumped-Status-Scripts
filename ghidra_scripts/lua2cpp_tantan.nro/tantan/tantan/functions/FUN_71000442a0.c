
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000442a0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_IS_CANCEL);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(param_1,true);
    return;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,HVar5);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,HVar5);
    lib::L2CValue::operator=(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,false);
      goto LAB_71000445e0;
    }
  }
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar6 = (float)app::lua_bind::FighterMotionModuleImpl__get_cancel_frame_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar5,true);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar4 = lib::L2CValue::operator<(aLStack64,aLStack112);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
LAB_71000445cc:
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar6 = (float)app::lua_bind::MotionModule__frame_partial_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack128);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_71000445cc;
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack144);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::L2CValue
                (aLStack144,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack176,true);
      FUN_7100018fa0(param_2,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_IS_CANCEL);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
LAB_71000445e0:
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

