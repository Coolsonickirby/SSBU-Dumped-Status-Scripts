
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022d60(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  Hash40 HVar3;
  BattleObjectModuleAccessor **ppBVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,90.0);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_40,param_2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,-90.0);
    uVar2 = lib::L2CValue::operator<(param_2,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,1.0);
      fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
      app::lua_bind::PostureModule__set_lr_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5);
      lVar7 = -0x30;
      goto LAB_7100022ec8;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_40,-1.0);
  fVar5 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
  app::lua_bind::PostureModule__set_lr_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,90.0);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_40,param_2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,180.0);
    lib::L2CValue::operator+(param_2,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator=(param_2,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,180.0);
    lib::L2CValue::operator-(param_2,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator=(param_2,aLStack96);
  }
  lVar7 = -0x50;
LAB_7100022ec8:
  ppBVar4 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar7));
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar4);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
  lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::operator-(param_2);
  lib::L2CValue::operator*(aLStack128,aLStack80);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  HVar3 = lib::L2CValue::as_hash(aLStack96);
  uVar2 = lib::L2CValue::as_number(aLStack112);
  lVar7 = lib::L2CValue::as_number(aLStack144);
  uVar6 = lib::L2CValue::as_number(aLStack160);
  local_40 = uVar2 & 0xffffffff | lVar7 << 0x20;
  uStack56 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar4,HVar3,(Vector3f *)&local_40,0,0);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator-(param_2);
  lib::L2CValue::operator*(aLStack128,aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  lib::L2CValue::operator+(aLStack112,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_PACMAN_STATUS_SPECIAL_S_WORK_FLOAT_ROT);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar4,fVar5,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

