
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a3e0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  uint uVar8;
  undefined8 uVar9;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
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
  ulong local_70;
  undefined8 uStack104;
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLAG_AIR_ATTACK);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar3 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar3 & 1) != 0) {
    return;
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0xe);
  uVar3 = lib::L2CValue::operator<=(param_3,pLVar4);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLAG_IS_RAY_CHECK_RESULT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  uVar9 = app::lua_bind::GroundModule__get_center_pos_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack160,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack160);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  uVar9 = app::lua_bind::PostureModule__pos_2d_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack208);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLOAT_START_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar7);
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar3 & 1) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLOAT_START_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar7);
    lib::L2CValue::operator-(pLVar4,(L2CValue *)&local_70);
    lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue(aLStack304,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  uVar9 = app::lua_bind::KineticModule__get_sum_speed_impl(param_1->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack288,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack288);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack272);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack304);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  lib::L2CValue::operator+(pLVar4,pLVar5);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  lib::L2CValue::operator+(pLVar4,pLVar5);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::operator-(param_4);
  lib::L2CValue::operator-(aLStack400,aLStack240);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
  lib::L2CValue::operator-(pLVar4,pLVar5);
  lib::L2CValue::operator+(aLStack384,aLStack416);
  lib::L2CValue::L2CValue(aLStack432,true);
  uVar3 = lib::L2CValue::as_number(aLStack320);
  uVar8 = lib::L2CValue::as_number(aLStack336);
  local_60 = uVar3 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack88 = 0;
  uVar3 = lib::L2CValue::as_number(aLStack352);
  uVar8 = lib::L2CValue::as_number(aLStack368);
  local_70 = uVar3 & 0xffffffff | (ulong)uVar8 << 0x20;
  uStack104 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack432);
  bVar1 = app::lua_bind::GroundModule__ray_check_impl
                    (param_1->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                     (bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
  uVar3 = lib::L2CValue::operator==(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLAG_IS_RAY_CHECK_RESULT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar3 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) == 0) goto LAB_710001aa4c;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar3 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,5);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      app::KineticUtility::clear_unable_energy(iVar2,pBVar6);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack304,1.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack(param_1,aLStack304);
      app::sv_kinetic_energy::set_speed_mul_2nd(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_DOLLY_STATUS_SPECIAL_S_WORK_FLAG_IS_RAY_CHECK_RESULT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
LAB_710001aa4c:
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

