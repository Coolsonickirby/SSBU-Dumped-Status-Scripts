
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000afb10(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  undefined8 uVar13;
  long lVar14;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  ulong local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_CURRENT_ROT_Z);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  ppBVar11 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_NEXT_ROT_Z);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue(aLStack128,aLStack112);
  pLVar9 = (L2CValue *)(param_1 + 200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator==(pLVar6,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_SITUATION_KIND_GROUND);
    uVar7 = lib::L2CValue::operator==(pLVar6,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    if ((uVar7 & 1) == 0) {
      FUN_71000a5130(auStack160,param_1);
      lib::L2CValue::operator!((L2CValue *)auStack160);
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)(auStack160 + 0x10));
      if ((bVar2 & 1U) == 0) {
        puVar1 = auStack160;
      }
      else {
        fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,-1);
        lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),fVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
        uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_c0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack160);
        if ((uVar7 & 1) == 0) goto LAB_71000afef0;
        lib::L2CValue::L2CValue((L2CValue *)auStack160,0xdfbf78d6f);
        lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x148626a673);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack160);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar8);
        lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),iVar3);
        lib::L2CValue::operator-((L2CValue *)(auStack160 + 0x10));
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_c0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
        puVar1 = auStack224;
      }
      lib::L2CValue::~L2CValue((L2CValue *)(puVar1 + 0x10));
      pLVar6 = (L2CValue *)auStack160;
      goto LAB_71000afeec;
    }
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0xdfbf78d6f);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x1459c2e511);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar7,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar12);
    lib::L2CValue::operator+(aLStack96,(L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::operator=(aLStack128,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    uVar13 = app::lua_bind::GroundModule__get_touch_normal_fixed_consider_gravity_impl
                       (*ppBVar11,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,(float)uVar13);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar13 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_c0);
    lib::L2CValue::operator=((L2CValue *)auStack160,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar6 = (L2CValue *)auStack160;
    lib::L2CAgent::math_atan((L2CAgent *)(auStack160 + 0x10),pLVar6,param_3);
    lib::L2CAgent::math_deg((L2CAgent *)auStack224,pLVar6);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack256,fVar12);
    lib::L2CValue::operator-(aLStack256);
    lib::L2CValue::operator*((L2CValue *)(auStack224 + 0x10),aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    pLVar6 = (L2CValue *)(auStack160 + 0x10);
LAB_71000afeec:
    lib::L2CValue::~L2CValue(pLVar6);
  }
LAB_71000afef0:
  pLVar6 = aLStack128;
  lib::L2CValue::operator-(aLStack112,pLVar6);
  lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,1e-05);
  uVar7 = lib::L2CValue::operator<((L2CValue *)&local_c0,(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  if ((uVar7 & 1) == 0) goto LAB_71000b023c;
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
  lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_NEXT_ROT_Z);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::operator=(aLStack112,aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0xdfbf78d6f);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0xf474026a3);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar9,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator==(pLVar6,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  if ((uVar7 & 1) == 0) {
    FUN_71000a5130(auStack224 + 0x10,param_1);
    lib::L2CValue::operator!((L2CValue *)(auStack224 + 0x10));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack160);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      pLVar6 = (L2CValue *)(auStack224 + 0x10);
    }
    else {
      fVar12 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar11,-1);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
      uVar7 = lib::L2CValue::operator<((L2CValue *)auStack224,(L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack224);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
      if ((uVar7 & 1) == 0) goto LAB_71000b0160;
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0xdfbf78d6f);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x17ab5756d3);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar11,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,iVar3);
      lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
      pLVar6 = (L2CValue *)auStack160;
    }
    lib::L2CValue::~L2CValue(pLVar6);
  }
LAB_71000b0160:
  lib::L2CValue::operator-(aLStack112,aLStack96);
  lib::L2CValue::operator/((L2CValue *)auStack224,(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
  lib::L2CValue::operator+((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_ADD_ROT_Z);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_ADD_ROT_Z_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
LAB_71000b023c:
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack160 + 0x10),
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_ADD_ROT_Z_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    app::lua_bind::WorkModule__set_int_impl(*ppBVar11,iVar3,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack160 + 0x10),
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_NEXT_ROT_Z);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar12);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack160,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_ADD_ROT_Z_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  uVar7 = lib::L2CValue::operator<((L2CValue *)&local_c0,(L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack160 + 0x10),
               _WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_NEXT_ROT_Z);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack160 + 0x10));
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,fVar12);
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    pLVar6 = (L2CValue *)(auStack160 + 0x10);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_ADD_ROT_Z_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar11,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack160,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_ADD_ROT_Z);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar12);
    lib::L2CValue::operator+(aLStack96,(L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
    pLVar6 = (L2CValue *)auStack160;
  }
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
  lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_c0,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_FLOAT_CURRENT_ROT_Z);
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar11,fVar12,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
  fVar12 = (float)app::SlopeModuleSimple::gravity_angle(pBVar10);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),fVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0.0);
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack256,fVar12);
  pLVar9 = aLStack256;
  lib::L2CValue::operator*(aLStack96,pLVar9);
  lib::L2CAgent::math_deg((L2CAgent *)(auStack160 + 0x10),pLVar9);
  lib::L2CValue::operator-(aLStack240,aLStack272);
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack160);
  lVar14 = lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
  uVar4 = lib::L2CValue::as_number((L2CValue *)auStack224);
  local_c0 = uVar7 & 0xffffffff | lVar14 << 0x20;
  uStack184 = (ulong)uVar4;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar11,(Vector3f *)&local_c0,0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

