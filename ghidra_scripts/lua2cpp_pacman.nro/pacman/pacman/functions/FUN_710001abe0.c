
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001abe0(long param_1,L2CValue *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SMASH_ANIMATION);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SMASH_ANIMATION);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack64);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::L2CValue(aLStack112,5);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,2);
    lib::L2CValue::operator*(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar3 & 1) == 0) goto LAB_710001af78;
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SMASH_ANIMATION);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar3 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) goto LAB_710001ae08;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
      lib::L2CValue::L2CValue(aLStack128,2.0);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      fVar4 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::MotionModule__set_frame_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4,true);
    }
    else {
LAB_710001ae08:
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      fVar4 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::MotionModule__set_frame_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4,true);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::MotionModule__set_rate_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,1.0);
    uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar3 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) != 0) goto LAB_710001ace4;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
      lib::L2CValue::L2CValue(aLStack128,3.0);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      fVar4 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::MotionModule__set_frame_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4,true);
    }
    else {
LAB_710001ace4:
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      fVar4 = (float)lib::L2CValue::as_number(aLStack128);
      app::lua_bind::MotionModule__set_frame_partial_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4,true);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    fVar4 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::MotionModule__set_rate_partial_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
LAB_710001af78:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

