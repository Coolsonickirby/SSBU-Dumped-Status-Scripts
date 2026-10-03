
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e090(void *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOTION_2ND_LERP_RATE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar5 = (L2CValue *)((long)param_1 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x1a);
  lib::L2CValue::L2CValue(aLStack112,-0.1);
  uVar4 = lib::L2CValue::operator<(pLVar3,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x1a);
    lib::L2CValue::L2CValue(aLStack112,0.1);
    uVar4 = lib::L2CValue::operator<(aLStack112,pLVar3);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0.5);
      uVar4 = lib::L2CValue::operator<(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,0.05);
        lib::L2CValue::operator-(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack368,0.5);
        lib::L2CValue::L2CValue(aLStack384,1.0);
        lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::operator=(aLStack128,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack368);
        pLVar5 = aLStack352;
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,0.05);
        lib::L2CValue::operator+(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.5);
        lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::operator=(aLStack128,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        pLVar5 = aLStack304;
      }
      goto LAB_710001e468;
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x1a);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::operator*(pLVar5,aLStack144);
  lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack192,0xcee0a3848);
  uVar4 = lib::L2CValue::as_integer(aLStack176);
  uVar6 = lib::L2CValue::as_integer(aLStack192);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack160);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0.05);
    lib::L2CValue::operator-(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::operator=(aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    pLVar5 = aLStack256;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0.05);
    lib::L2CValue::operator+(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,1.0);
    lua2cpp::L2CFighterBase::clamp(param_1,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::operator=(aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    pLVar5 = aLStack208;
  }
LAB_710001e468:
  lib::L2CValue::~L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator+(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_HI_FLOAT_MOTION_2ND_LERP_RATE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar8,iVar2);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  HVar7 = app::lua_bind::MotionModule__motion_kind_2nd_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,HVar7);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.5);
  uVar4 = lib::L2CValue::operator<(aLStack128,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::operator=(aLStack144,param_3);
    lib::L2CValue::L2CValue(aLStack112,0.5);
    lib::L2CValue::operator-(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,2.0);
    lib::L2CValue::operator*(aLStack192,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::operator=(aLStack160,aLStack176);
  }
  else {
    lib::L2CValue::operator=(aLStack144,param_2);
    lib::L2CValue::L2CValue(aLStack112,2.0);
    lib::L2CValue::operator*(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator-(aLStack112,aLStack192);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::operator=(aLStack160,aLStack176);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  HVar7 = app::lua_bind::MotionModule__motion_kind_2nd_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack112,HVar7);
  uVar4 = lib::L2CValue::operator==(aLStack112,aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    fVar8 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    fVar8 = (float)app::lua_bind::MotionModule__rate_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::L2CValue(aLStack400,true);
    HVar7 = lib::L2CValue::as_hash(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    fVar9 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack400);
    fVar10 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::MotionModule__add_motion_2nd_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar7,fVar8,fVar9,
               (bool)(bVar1 & 1),fVar10);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator-(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack416);
    app::lua_bind::MotionModule__set_weight_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar8,true);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::operator-(aLStack112,aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::MotionModule__set_weight_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar8,true);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

