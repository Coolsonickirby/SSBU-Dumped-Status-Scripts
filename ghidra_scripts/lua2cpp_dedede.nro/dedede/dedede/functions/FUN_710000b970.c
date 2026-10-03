
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000b970(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,-1.0);
  uVar3 = lib::L2CValue::operator==(aLStack64,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_30,true);
    uVar3 = lib::L2CValue::operator==(aLStack64,(L2CValue *)&local_30);
    lib::L2CValue::~L2CValue((L2CValue *)&local_30);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,0x570211ebd);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,180.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    uVar6 = lib::L2CValue::as_number(aLStack80);
    uVar7 = lib::L2CValue::as_number(aLStack96);
    uVar8 = lib::L2CValue::as_number(aLStack112);
    local_30 = CONCAT44(uVar7,uVar6);
    uStack40 = (ulong)uVar8;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,(Vector3f *)&local_30,0,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_30,false);
    uVar3 = lib::L2CValue::operator==(aLStack64,(L2CValue *)&local_30);
    lib::L2CValue::~L2CValue((L2CValue *)&local_30);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lib::L2CValue::L2CValue(aLStack64,0x570211ebd);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,180.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack64);
    uVar6 = lib::L2CValue::as_number(aLStack80);
    uVar7 = lib::L2CValue::as_number(aLStack96);
    uVar8 = lib::L2CValue::as_number(aLStack112);
    local_30 = CONCAT44(uVar7,uVar6);
    uStack40 = (ulong)uVar8;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,(Vector3f *)&local_30,0,0);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

