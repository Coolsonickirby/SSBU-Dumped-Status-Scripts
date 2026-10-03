
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100045080(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) goto LAB_710004542c;
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0xe);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLOAT_HIT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x1071d55215);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::operator+(aLStack96,aLStack128);
    uVar4 = lib::L2CValue::operator<=(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_STEP_CHANCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_F);
      uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_STEP_CHANCEL);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_B);
        uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar4 & 1) == 0) goto LAB_710004534c;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_B);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_LW_STEP_F);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
    }
  }
LAB_710004534c:
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_REVERSE_MATERIAL_ANIM);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    pLVar5 = aLStack96;
LAB_7100045420:
    lib::L2CValue::~L2CValue(pLVar5);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_STOP_MATERIAL_ANIM);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_STOP_MATERIAL_ANIM);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      pLVar5 = aLStack80;
      goto LAB_7100045420;
    }
  }
  FUN_7100044570(param_2);
LAB_710004542c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

