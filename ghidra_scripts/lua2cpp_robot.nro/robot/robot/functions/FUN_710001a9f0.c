
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a9f0(void *param_1)

{
  int iVar1;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_STICK_);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar3);
  lib::L2CValue::operator-((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_ROBOT_STATUS_ARMSPIN_WORK_FLOAT_ANG_SPIN);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,aLStack96);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack192,0x609a3106f);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  HVar2 = lib::L2CValue::as_hash(aLStack192);
  uVar4 = lib::L2CValue::as_number(this);
  uVar5 = lib::L2CValue::as_number(this_00);
  uVar6 = lib::L2CValue::as_number(this_01);
  local_50 = CONCAT44(uVar5,uVar4);
  uStack72 = (ulong)uVar6;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar2,(Vector3f *)&local_50,0,0)
  ;
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

