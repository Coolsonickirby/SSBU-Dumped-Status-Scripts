
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100019c20(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *this;
  L2CValue *this_00;
  float *pfVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined8 local_100;
  undefined8 uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x20c1a4d44b);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,1);
  lib::L2CValue::operator-(aLStack128,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  uVar4 = lib::L2CValue::operator<=(aLStack160,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) goto LAB_710001a1d8;
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,
             _FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_RAY_CHECK_RESULT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x162d277af);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar7);
  lib::L2CValue::L2CValue(aLStack240,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar7[2]);
  lib::L2CValue::operator=(pLVar6,(L2CValue *)&local_100);
  lib::L2CValue::operator=(this,aLStack240);
  lib::L2CValue::operator=(this_00,aLStack224);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_START_Y);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar9);
  uVar4 = lib::L2CValue::operator<((L2CValue *)&local_100,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_START_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator-(pLVar6,(L2CValue *)&local_70);
    lib::L2CValue::operator=(aLStack272,(L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack288);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack288,fVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack304,fVar9);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  lib::L2CValue::operator+(pLVar6,aLStack288);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar6,aLStack304);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,-1.0);
  lib::L2CValue::operator-((L2CValue *)&local_100,aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack400,true);
  uVar10 = lib::L2CValue::as_number(aLStack336);
  uVar11 = lib::L2CValue::as_number(aLStack352);
  local_100 = CONCAT44(uVar11,uVar10);
  uStack248 = 0;
  uVar10 = lib::L2CValue::as_number(aLStack368);
  uVar11 = lib::L2CValue::as_number(aLStack384);
  local_70 = CONCAT44(uVar11,uVar10);
  uStack104 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack400);
  bVar1 = app::lua_bind::GroundModule__ray_check_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),(Vector2f *)&local_100,
                     (Vector2f *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack320);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,
               _FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_RAY_CHECK_RESULT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__off_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_1 + 200),5);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      app::KineticUtility::clear_unable_energy(iVar3,pBVar8);
      goto LAB_710001a1a8;
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,
               _FIGHTER_LITTLEMAC_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_RAY_CHECK_RESULT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar3);
LAB_710001a1a8:
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  }
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
LAB_710001a1d8:
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

