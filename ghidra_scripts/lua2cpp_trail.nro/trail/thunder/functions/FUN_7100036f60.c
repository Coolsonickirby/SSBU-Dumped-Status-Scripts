
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100036f60(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  L2CValue *this_00;
  Hash40 HVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLOAT_FALL_START_SCALE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  lib::L2CValue::L2CValue(aLStack144,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLOAT_FALL_START_POS_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
  fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::operator-((L2CValue *)&local_50,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_TRAIL_THUNDER_INSTANCE_WORK_ID_FLAG_IS_REFLECT);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::operator-(aLStack176);
    lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xd4022630a);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0xada97088d);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,
                            (ulong)pLVar5);
  lib::L2CValue::L2CValue(aLStack208,fVar7);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)auStack240,0.001);
  lib::L2CValue::operator/(aLStack176,aLStack208);
  lib::L2CAgent::math_max((L2CAgent *)auStack240,aLStack256,pLVar5);
  lib::L2CValue::operator*((L2CValue *)(auStack240 + 0x10),aLStack192);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)auStack240);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0x31ed91fca);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)(auStack240 + 0x10));
  uVar8 = lib::L2CValue::as_number(pLVar5);
  uVar9 = lib::L2CValue::as_number(this);
  uVar10 = lib::L2CValue::as_number(this_00);
  local_50 = CONCAT44(uVar9,uVar8);
  uStack72 = (ulong)uVar10;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,(Vector3f *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

