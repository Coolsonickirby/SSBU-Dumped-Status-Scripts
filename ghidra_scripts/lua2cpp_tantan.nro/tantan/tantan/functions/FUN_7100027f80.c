
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027f80(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  void *pvVar5;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::status_end_Catch(param_2);
  lib::L2CValue::~L2CValue(aLStack96);
  this = &param_2->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_REBOUND_STOP);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) goto LAB_7100028230;
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH_PULL);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_CATCH_PHYSICS_REWIND);
    uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) goto LAB_7100028070;
    FUN_71000209e0(param_2);
  }
  else {
LAB_7100028070:
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    pvVar5 = (void *)app::sv_battle_object::module_accessor(uVar2);
    if (pvVar5 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,pvVar5);
    }
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    fVar7 = (float)app::lua_bind::MotionModule__frame_impl(pBVar6);
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_FRAME);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar7,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    fVar7 = (float)app::lua_bind::MotionModule__rate_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,fVar7);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar7,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,0);
  FUN_7100028320(param_2,aLStack160,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
LAB_7100028230:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

