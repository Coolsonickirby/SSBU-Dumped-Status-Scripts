
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100008d80(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  L2CValue aLStack416 [16];
  undefined8 local_190;
  ulong uStack392;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  float local_70;
  float fStack108;
  ulong uStack104;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_190,_FIGHTER_PICKEL_STATUS_CATCH_PULL_WORK_FLOAT_LINE_LENGTH);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar13);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack192,*pfVar5);
  lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack160,pfVar5[2]);
  FUN_7100009760(aLStack144,param_1,aLStack192);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack240,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack256,0x24ad03213f);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  uVar8 = lib::L2CValue::as_integer(aLStack256);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack224,fVar13);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack272,fVar13);
  lib::L2CValue::operator*(aLStack224,aLStack272);
  fVar13 = (float)app::lua_bind::PostureModule__lr_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack288,fVar13);
  lib::L2CValue::operator*(aLStack208,aLStack288);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack224,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack240,0x24da0411a9);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  uVar8 = lib::L2CValue::as_integer(aLStack240);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack208,fVar13);
  fVar13 = (float)app::lua_bind::PostureModule__scale_impl
                            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack256,fVar13);
  lib::L2CValue::operator*(aLStack208,aLStack256);
  lib::L2CValue::operator+(pLVar6,(L2CValue *)&local_70);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_190,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_CATCH_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack208,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar4);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack224,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,pvVar9);
  }
  lib::L2CValue::L2CValue(aLStack304,0.0);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack256,false);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  pLVar11 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x162d277af);
  lib::L2CValue::L2CValue(aLStack272,LINK_NO_CAPTURE);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack240,0x162d277af);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  local_70 = (float)lib::L2CValue::as_number(this);
  fStack108 = (float)lib::L2CValue::as_number(this_00);
  uVar4 = lib::L2CValue::as_number(this_01);
  uStack104 = (ulong)uVar4;
  bVar1 = app::lua_bind::LinkModule__get_node_catprue_pos_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3,
                     (Vector3f *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack384,local_70);
  lib::L2CValue::L2CValue(aLStack368,fStack108);
  lib::L2CValue::L2CValue(aLStack352,(float)uStack104);
  lib::L2CValue::operator=(aLStack256,(L2CValue *)&local_190);
  lib::L2CValue::operator=(pLVar6,aLStack384);
  lib::L2CValue::operator=(pLVar10,aLStack368);
  lib::L2CValue::operator=(pLVar11,aLStack352);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue(aLStack272);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack256);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::operator-(aLStack240,aLStack144);
    lib::L2CValue::L2CValue(aLStack416,(L2CValue *)&local_70);
    lua2cpp::L2CFighterBase::Vector3__normalize(param_1,(L2CValue)0x60);
    lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::operator*((L2CValue *)&local_70,aLStack128);
    lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::operator+((L2CValue *)&local_70,aLStack144);
    lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue(aLStack272,0x54f934137);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_70,0x162d277af);
    lib::L2CValue::L2CValue(aLStack288,true);
    HVar12 = lib::L2CValue::as_hash(aLStack272);
    uVar14 = lib::L2CValue::as_number(pLVar6);
    uVar15 = lib::L2CValue::as_number(pLVar10);
    uVar4 = lib::L2CValue::as_number(pLVar11);
    local_190 = CONCAT44(uVar15,uVar14);
    uStack392 = (ulong)uVar4;
    bVar1 = lib::L2CValue::as_bool(aLStack288);
    app::lua_bind::ModelModule__set_joint_translate_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar12,(Vector3f *)&local_190,
               (bool)(bVar1 & 1),false);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

