
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015310(void *param_1)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
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
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),0xe);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x1154de6755);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator/(aLStack96,aLStack112);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
  uVar3 = lib::L2CValue::operator==(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
    lib::L2CValue::operator-((L2CValue *)&local_50,aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack128,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    lib::L2CValue::operator-(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack128,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  uVar3 = lib::L2CValue::operator<(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_BACK_ANGLE);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack176,fVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_SEARCH_LR);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack192,fVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    uVar3 = lib::L2CValue::operator==(aLStack192,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      lib::L2CValue::operator-((L2CValue *)&local_50,aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator=(aLStack176,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
    uVar3 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
      lib::L2CValue::operator-(aLStack176,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator=(aLStack176,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack224,aLStack176);
    lib::L2CValue::L2CValue(aLStack240,aLStack128);
    lib::L2CValue::L2CValue(aLStack256,aLStack144);
    lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack176,0x31d39a761);
  lib::L2CValue::operator-(aLStack128);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  HVar5 = lib::L2CValue::as_hash(aLStack176);
  uVar3 = lib::L2CValue::as_number(aLStack192);
  lVar8 = lib::L2CValue::as_number(aLStack208);
  uVar7 = lib::L2CValue::as_number(aLStack272);
  local_50 = uVar3 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,(Vector3f *)&local_50,0,0)
  ;
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

