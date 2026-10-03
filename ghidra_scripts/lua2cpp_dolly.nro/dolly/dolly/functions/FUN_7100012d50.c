
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100012d50(void *param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue *this;
  L2CValue *this_00;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
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
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe22a27e23);
  uVar2 = lib::L2CValue::as_integer(param_2);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  lVar4 = app::lua_bind::WorkModule__get_param_int64_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1120d05587);
  uVar2 = lib::L2CValue::as_integer(param_2);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::L2CValue(aLStack176,0x1157d76511);
  uVar2 = lib::L2CValue::as_integer(param_2);
  uVar3 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack160,fVar7);
  lib::L2CValue::L2CValue(aLStack208,0x11cede34ab);
  uVar2 = lib::L2CValue::as_integer(param_2);
  uVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar7);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  fVar7 = 0.0;
  lib::L2CValue::L2CValue(aLStack288,0.0);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  uVar2 = lib::L2CValue::as_number(aLStack208);
  lVar4 = lib::L2CValue::as_number(aLStack272);
  uVar8 = lib::L2CValue::as_number(aLStack288);
  local_60 = uVar2 & 0xffffffff | lVar4 << 0x20;
  uStack88 = (ulong)uVar8;
  uVar9 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,
                     (Vector3f *)&local_60);
  lib::L2CValue::L2CValue(aLStack256,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue(aLStack224,fVar7);
  FUN_7100014320(aLStack176,param_1,aLStack256);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_FLOAT_MAP_COLL_OFFSET_X)
  ;
  fVar7 = (float)lib::L2CValue::as_number(aLStack208);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar7,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_FLOAT_MAP_COLL_OFFSET_Y)
  ;
  fVar7 = (float)lib::L2CValue::as_number(aLStack208);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar7,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  fVar10 = 0.0;
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_FLOAT_MAP_COLL_OFFSET_Z)
  ;
  fVar7 = (float)lib::L2CValue::as_number(aLStack208);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar7,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  uVar2 = lib::L2CValue::as_number(pLVar6);
  lVar4 = lib::L2CValue::as_number(this);
  uVar8 = lib::L2CValue::as_number(this_00);
  local_60 = uVar2 & 0xffffffff | lVar4 << 0x20;
  uStack88 = (ulong)uVar8;
  uVar9 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar5,
                     (Vector3f *)&local_60);
  lib::L2CValue::L2CValue(aLStack336,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue(aLStack304,fVar10);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

