
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010e30(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  MotionNodeRotateCompose MVar4;
  Hash40 HVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ROBOT_GENERATE_ARTICLE_MAINLASER);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_ROBOT_STATUS_FINAL_WORK_FLOAT_MAINLASER_ANGLE_OFFSET);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack96,0x57ac2c32e);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    uVar7 = lib::L2CValue::as_number(aLStack112);
    uVar8 = lib::L2CValue::as_number(aLStack80);
    uVar9 = lib::L2CValue::as_number(aLStack128);
    local_40 = CONCAT44(uVar8,uVar7);
    uStack56 = (ulong)uVar9;
    MVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,(Vector3f *)&local_40,MVar4,0)
    ;
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

