
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000179f0(void *param_1)

{
  int iVar1;
  uint uVar2;
  MotionNodeRotateCompose MVar3;
  Hash40 HVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  long lVar9;
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
  undefined auStack240 [32];
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
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,HVar4);
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack160,aLStack112);
  FUN_7100018230(aLStack144,aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R)
    ;
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,HVar4);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    FUN_7100018230(aLStack144,aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((uVar5 & 1) == 0) goto LAB_7100017b84;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_50);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_50);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
LAB_7100017b84:
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar5 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    fVar8 = (float)app::lua_bind::MotionModule__frame_partial_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    uVar2 = app::lua_bind::MotionModule__end_frame_partial_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack192,uVar2);
    lib::L2CValue::operator-(aLStack192,aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xc1f106e8d);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0x15379a6cbc);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),iVar1);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    uVar5 = lib::L2CValue::operator<(aLStack208,(L2CValue *)(auStack240 + 0x10));
    if ((uVar5 & 1) != 0) {
      pLVar7 = aLStack208;
      lib::L2CValue::operator-((L2CValue *)(auStack240 + 0x10),pLVar7);
      lib::L2CAgent::math_floor((L2CAgent *)auStack240,pLVar7);
      lib::L2CValue::operator-((L2CValue *)auStack240,aLStack256);
      lib::L2CValue::L2CValue(aLStack320,0xc1f106e8d);
      lib::L2CValue::L2CValue(aLStack336,0x14b5488f6f);
      uVar5 = lib::L2CValue::as_integer(aLStack320);
      uVar6 = lib::L2CValue::as_integer(aLStack336);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack304,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      lib::L2CValue::operator-((L2CValue *)&local_50,aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      fVar8 = (float)lib::L2CValue::as_number(aLStack288);
      iVar1 = lib::L2CValue::as_integer(aLStack256);
      fVar8 = (float)app::sv_math::pow(fVar8,iVar1);
      lib::L2CValue::L2CValue(aLStack304,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::operator*(aLStack304,aLStack288);
        lib::L2CValue::L2CValue(aLStack352,aLStack304);
        lib::L2CValue::L2CValue(aLStack368,(L2CValue *)&local_50);
        lib::L2CValue::L2CValue(aLStack384,aLStack272);
        lua2cpp::L2CFighterBase::lerp(param_1,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::operator=(aLStack304,aLStack320);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue(aLStack368);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      lib::L2CValue::operator-((L2CValue *)&local_50,aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator=(aLStack304,aLStack320);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::L2CValue(aLStack320,0x6721356a4);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      lib::L2CValue::operator*((L2CValue *)&local_50,aLStack304);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue(aLStack400,0.0);
      lib::L2CValue::L2CValue(aLStack416,0.0);
      lib::L2CValue::L2CValue(aLStack432,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
      HVar4 = lib::L2CValue::as_hash(aLStack320);
      uVar5 = lib::L2CValue::as_number(aLStack336);
      lVar9 = lib::L2CValue::as_number(aLStack400);
      uVar2 = lib::L2CValue::as_number(aLStack416);
      local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
      uStack72 = (ulong)uVar2;
      MVar3 = lib::L2CValue::as_integer(aLStack432);
      app::lua_bind::ModelModule__set_joint_rotate_impl
                (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar4,(Vector3f *)&local_50,
                 MVar3,0);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

