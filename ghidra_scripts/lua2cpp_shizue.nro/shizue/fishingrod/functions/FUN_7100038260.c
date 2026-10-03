
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038260(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  fVar7 = (float)app::lua_bind::PhysicsModule__get_2nd_active_node_num_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::L2CValue
            (aLStack176,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_LINE_JOINT_LENGTH);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::operator*(aLStack112,aLStack160);
  fVar9 = 0.0;
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_LINE_LENGTH);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar7,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack128);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) == 0) goto LAB_71000387f0;
  iVar3 = app::lua_bind::PhysicsModule__get_2nd_node_num_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator-(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  uVar8 = app::lua_bind::PhysicsModule__get_2nd_speed_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar8);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar8 >> 0x20));
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  FUN_7100008290(aLStack144,param_1,aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack160);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x162d277af);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator=(pLVar4,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack240,aLStack144);
  lua2cpp::L2CFighterBase::Vector3__length(param_1,(L2CValue)0x10);
  lib::L2CValue::L2CValue(aLStack256,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack272,0x1184edd65b);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  bVar1 = lib::L2CValue::operator<=(aLStack176,aLStack160);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_ENABLE_HOOK);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack288,aLStack144);
  lua2cpp::L2CFighterBase::Vector3__length(param_1,(L2CValue)0xe0);
  lib::L2CValue::L2CValue(aLStack256,0x10abbfb75a);
  lib::L2CValue::L2CValue(aLStack272,0x12156fdc9f);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  uVar6 = lib::L2CValue::as_integer(aLStack272);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  bVar1 = lib::L2CValue::operator<=(aLStack176,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLOAT_HOOK_RESTITUTION_RATE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_ENABLE_BOUND);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack256);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack256);
    pLVar4 = aLStack272;
LAB_7100038744:
    lib::L2CValue::~L2CValue(pLVar4);
  }
  else {
    lib::L2CValue::operator!(aLStack160);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack304);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator=(aLStack176,aLStack96);
      pLVar4 = aLStack96;
      goto LAB_7100038744;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,1);
  lib::L2CValue::operator-(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  fVar7 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::PhysicsModule__set_2nd_restitution_rate_2_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,fVar7);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_FISHINGROD_INSTANCE_WORK_ID_FLAG_ENABLE_BOUND);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_flag_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(bool)(bVar1 & 1),iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
LAB_71000387f0:
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

