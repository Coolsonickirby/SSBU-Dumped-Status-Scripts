
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100007c20(long param_1)

{
  int iVar1;
  L2CValue *this;
  ulong uVar2;
  undefined8 *this_00;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 auStack96 [2];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(this,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
    FUN_7100007e30(&local_40,param_1);
    lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
    this_00 = &local_40;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack96,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_TOP_DEGREE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar4);
    lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    this_00 = auStack96;
  }
  lib::L2CValue::~L2CValue((L2CValue *)this_00);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x31ed91fca);
  fVar4 = (float)app::lua_bind::PostureModule__rot_y_lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)auStack96);
  uVar5 = lib::L2CValue::as_number(aLStack80);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  local_40 = CONCAT44(uVar6,uVar5);
  uStack56 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_40,0,0);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

