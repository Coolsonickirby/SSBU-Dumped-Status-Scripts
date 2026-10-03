
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001cca0(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *pLVar5;
  FighterModuleAccessor *pFVar6;
  Vector2f VVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),5);
  pLVar5 = (L2CValue *)((long)param_2 + 0x228);
  this_00 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xe355382bf);
  this_01 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xe4254b229);
  VVar7 = 0x748d671d;
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0xc748d671d);
  lib::L2CValue::operator-(pLVar5);
  pFVar6 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(this);
  fVar8 = (float)lib::L2CValue::as_number(this_00);
  lib::L2CValue::as_number(this_01);
  lib::L2CValue::as_number(aLStack128);
  bVar1 = app::FighterSpecializer_Murabito::check_special_lw_plant(pFVar6,VVar7,fVar8);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack112);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_LW_FLAG_SUCCESS);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__on_flag_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack208,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack208);
    uVar9 = app::lua_bind::GroundModule__get_touch_normal_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4);
    lib::L2CValue::L2CValue(aLStack192,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack96,aLStack192);
    lib::L2CValue::L2CValue(aLStack112,aLStack176);
    lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,-10.0);
    lib::L2CValue::operator*(aLStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    fVar8 = (float)app::lua_bind::PostureModule__scale_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::operator*(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MURABITO_STATUS_SPECIAL_LW_PLANT_FLOAT_PLANT_POS_Y);
    fVar8 = (float)lib::L2CValue::as_number(pLVar5);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__add_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar8,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::L2CValue(param_1,false);
  }
  return;
}

