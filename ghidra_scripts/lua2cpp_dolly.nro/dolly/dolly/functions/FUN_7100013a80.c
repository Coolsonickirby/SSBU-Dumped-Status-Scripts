
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013a80(void *param_1,L2CValue *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  long lVar8;
  Hash40 HVar9;
  float fVar10;
  uint uVar11;
  undefined8 uVar12;
  float in_register_00005008;
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
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_INT_MAP_COLL_COUNT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x153b9338cc);
  uVar3 = lib::L2CValue::as_integer(param_2);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::operator<(aLStack96,aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
    lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator=(aLStack96,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_INT_MAP_COLL_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0x1120d05587);
    uVar3 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::L2CValue(aLStack176,0x1157d76511);
    uVar3 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::L2CValue(aLStack208,0x11cede34ab);
    uVar3 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack192,fVar10);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,
               _FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_FLOAT_MAP_COLL_OFFSET_X);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack224,fVar10);
    lib::L2CValue::L2CValue
              (aLStack208,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_FLOAT_MAP_COLL_OFFSET_Y);
    iVar1 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack240,fVar10);
    lib::L2CValue::L2CValue
              (aLStack272,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL_WORK_FLOAT_MAP_COLL_OFFSET_Z);
    iVar1 = lib::L2CValue::as_integer(aLStack272);
    fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack256,fVar10);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator/(aLStack96,aLStack112);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
    lib::L2CValue::operator-(pLVar6,pLVar7);
    lib::L2CValue::operator*(aLStack208,aLStack288);
    lib::L2CValue::operator+(pLVar5,aLStack272);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
    lib::L2CValue::operator-(pLVar6,pLVar7);
    lib::L2CValue::operator*(aLStack208,aLStack288);
    lib::L2CValue::operator+(pLVar5,aLStack272);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
    lib::L2CValue::operator-(pLVar6,pLVar7);
    lib::L2CValue::operator*(aLStack208,aLStack288);
    lib::L2CValue::operator+(pLVar5,aLStack272);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack288,0xe22a27e23);
    uVar3 = lib::L2CValue::as_integer(param_2);
    uVar4 = lib::L2CValue::as_integer(aLStack288);
    lVar8 = app::lua_bind::WorkModule__get_param_int64_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack272,lVar8);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
    HVar9 = lib::L2CValue::as_hash(aLStack272);
    uVar3 = lib::L2CValue::as_number(pLVar5);
    lVar8 = lib::L2CValue::as_number(pLVar6);
    uVar11 = lib::L2CValue::as_number(pLVar7);
    local_50 = uVar3 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar11;
    uVar12 = app::lua_bind::GroundModule__set_shape_data_rhombus_modify_node_offset_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar9,
                        (Vector3f *)&local_50);
    lib::L2CValue::L2CValue(aLStack336,(float)uVar12);
    lib::L2CValue::L2CValue(aLStack320,(float)((ulong)uVar12 >> 0x20));
    lib::L2CValue::L2CValue(aLStack304,in_register_00005008);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

