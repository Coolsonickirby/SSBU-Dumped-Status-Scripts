
void FUN_7100021cd0(long param_1,L2CValue *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  Article *pAVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  L2CValue *this;
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_register_00005008;
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
  ulong local_70;
  ulong uStack104;
  
  iVar1 = lib::L2CValue::as_integer(param_2);
  pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,pvVar4);
  }
  uVar5 = lib::L2CValue::operator==
                    (aLStack128,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar5 & 1) == 0) {
    pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack128);
    uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar2);
    uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack144,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,pvVar4);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar10 = (float)app::lua_bind::PhysicsModule__get_2nd_active_node_num_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xcb4cf0e97);
    lib::L2CValue::L2CValue(aLStack192,0x13c84139d5);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(pBVar7,uVar5,uVar8);
    lib::L2CValue::L2CValue(aLStack176,fVar10);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    iVar1 = lib::L2CValue::as_integer(aLStack160);
    if (-1 < iVar1) {
      iVar9 = -1;
      do {
        fVar10 = (float)in_register_00005008;
        lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar9 + 1);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
        uVar11 = app::lua_bind::PhysicsModule__get_2nd_speed_impl(pBVar7,iVar3);
        lib::L2CValue::L2CValue(aLStack240,(float)uVar11);
        lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar11 >> 0x20));
        in_register_00005008 = 0;
        lib::L2CValue::L2CValue(aLStack208,fVar10);
        FUN_710000eb70(aLStack192,param_1,aLStack240);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack256,iVar9 + 1);
        this = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
        lib::L2CValue::operator-(aLStack176);
        lib::L2CValue::L2CValue(aLStack288,0);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        uVar5 = lib::L2CValue::as_number(this);
        lVar12 = lib::L2CValue::as_number(aLStack272);
        uVar2 = lib::L2CValue::as_number(aLStack288);
        local_70 = uVar5 & 0xffffffff | lVar12 << 0x20;
        uStack104 = (ulong)uVar2;
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::PhysicsModule__set_2nd_speed_impl(pBVar7,iVar3,(Vector3f *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack192);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

