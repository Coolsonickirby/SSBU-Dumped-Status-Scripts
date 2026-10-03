
/* WARNING: Could not reconcile some variable overlaps */

void FUN_710001ec30(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  MotionNodeRotateCompose MVar2;
  ulong uVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  Hash40 HVar6;
  BattleObjectModuleAccessor *pBVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  float in_register_00005008;
  float fVar11;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
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
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  uVar3 = lib::L2CValue::operator==(param_3,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
  if ((uVar3 & 1) == 0) {
    uVar10 = app::sv_camera_manager::get_pos();
    lib::L2CValue::L2CValue(aLStack240,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar10 >> 0x20));
    fVar11 = 0.0;
    lib::L2CValue::L2CValue(aLStack208,in_register_00005008);
    FUN_710000bf50(aLStack112,param_1,aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    uVar10 = app::sv_camera_manager::get_target();
    lib::L2CValue::L2CValue(aLStack288,(float)uVar10);
    lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar10 >> 0x20));
    lib::L2CValue::L2CValue(aLStack256,fVar11);
    FUN_710000bf50(aLStack176,param_1,aLStack288);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue(aLStack352,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack368,0);
    lib::L2CValue::L2CValue(aLStack384,0);
    lib::L2CValue::L2CValue(aLStack400,0);
    lib::L2CValue::L2CValue(aLStack416,false);
    HVar6 = lib::L2CValue::as_hash(aLStack352);
    uVar3 = lib::L2CValue::as_number(aLStack368);
    lVar9 = lib::L2CValue::as_number(aLStack384);
    uVar8 = lib::L2CValue::as_number(aLStack400);
    local_60 = uVar3 & 0xffffffff | lVar9 << 0x20;
    uStack88 = (ulong)uVar8;
    bVar1 = lib::L2CValue::as_bool(aLStack416);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_3);
    app::lua_bind::ModelModule__joint_global_position_impl
              (pBVar7,HVar6,(Vector3f *)&local_60,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack336,(float)local_60);
    lib::L2CValue::L2CValue(aLStack320,local_60._4_4_);
    lib::L2CValue::L2CValue(aLStack304,(float)uStack88);
    FUN_710000bf50(aLStack192,param_1,aLStack336);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::L2CValue(aLStack368,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack384,0);
    lib::L2CValue::L2CValue(aLStack400,0);
    lib::L2CValue::L2CValue(aLStack416,0);
    HVar6 = lib::L2CValue::as_hash(aLStack368);
    uVar3 = lib::L2CValue::as_number(aLStack384);
    lVar9 = lib::L2CValue::as_number(aLStack400);
    uVar8 = lib::L2CValue::as_number(aLStack416);
    local_60 = uVar3 & 0xffffffff | lVar9 << 0x20;
    uStack88 = (ulong)uVar8;
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(param_3);
    app::lua_bind::ModelModule__joint_rotate_impl(pBVar7,HVar6,(Vector3f *)&local_60);
    lib::L2CValue::L2CValue(aLStack464,(float)local_60);
    lib::L2CValue::L2CValue(aLStack448,local_60._4_4_);
    lib::L2CValue::L2CValue(aLStack432,(float)uStack88);
    FUN_710000bf50(aLStack352,param_1,aLStack464);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack368,0x31d39a761);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack352,0x18cdc1683);
    lib::L2CValue::operator+(pLVar5,param_2);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    HVar6 = lib::L2CValue::as_hash(aLStack368);
    uVar3 = lib::L2CValue::as_number(aLStack384);
    lVar9 = lib::L2CValue::as_number(aLStack400);
    uVar8 = lib::L2CValue::as_number(aLStack416);
    local_60 = uVar3 & 0xffffffff | lVar9 << 0x20;
    uStack88 = (ulong)uVar8;
    MVar2 = lib::L2CValue::as_integer(param_3);
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar6,(Vector3f *)&local_60,MVar2,0)
    ;
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
  }
  else {
    pfVar4 = (float *)app::lua_bind::PostureModule__rot_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),0);
    lib::L2CValue::L2CValue(aLStack160,*pfVar4);
    lib::L2CValue::L2CValue(aLStack144,pfVar4[1]);
    lib::L2CValue::L2CValue(aLStack128,pfVar4[2]);
    FUN_710000bf50(aLStack112,param_1,aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack176,90.0);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x162d277af);
    lib::L2CValue::operator-(this,param_2);
    uVar3 = lib::L2CValue::as_number(pLVar5);
    lVar9 = lib::L2CValue::as_number(aLStack176);
    uVar8 = lib::L2CValue::as_number(aLStack192);
    local_60 = uVar3 & 0xffffffff | lVar9 << 0x20;
    uStack88 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_60,0);
  }
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

