
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044d60(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  uint uVar12;
  long lVar13;
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  undefined auStack272 [32];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  BattleObjectModuleAccessor *local_d0;
  ulong uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack160);
  ppBVar10 = (BattleObjectModuleAccessor **)(param_1 + 0x40);
  pfVar4 = (float *)app::lua_bind::PostureModule__rot_impl(*ppBVar10,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,*pfVar4);
  lib::L2CValue::L2CValue(aLStack192,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar4[2]);
  lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_d0);
  lib::L2CValue::operator=(aLStack144,aLStack192);
  lib::L2CValue::operator=(aLStack160,aLStack176);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
  uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_TURN_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar10,iVar3,0);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
    uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
      uVar5 = lib::L2CValue::operator==(param_3,(L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_TURN_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_d0,0);
        uVar5 = lib::L2CValue::operator<=(aLStack112,(L2CValue *)&local_d0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack240);
        if ((uVar5 & 1) != 0) goto LAB_7100045b84;
        lib::L2CValue::L2CValue(aLStack240,0x1086bc4a93);
        lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0x1281789106);
        uVar5 = lib::L2CValue::as_integer(aLStack240);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack272 + 0x10));
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar5,uVar6);
        lib::L2CValue::L2CValue(aLStack112,fVar11);
        lib::L2CValue::operator-(aLStack112);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_d0,aLStack128);
        lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
        lib::L2CValue::~L2CValue(aLStack240);
        if ((uVar5 & 1) != 0) goto LAB_7100045b84;
      }
    }
  }
  pLVar8 = (L2CValue *)(param_1 + 200);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1a);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
  uVar5 = lib::L2CValue::operator==(pLVar7,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  if ((uVar5 & 1) == 0) {
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack240,fVar11);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,-1.0);
      lib::L2CValue::operator*(aLStack240,(L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::operator=(aLStack240,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack240,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_d0,aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      if ((uVar5 & 1) != 0) {
        pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.1);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_d0,pLVar7);
        lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
        if ((uVar5 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.1);
          uVar5 = lib::L2CValue::operator<(pLVar8,(L2CValue *)&local_d0);
          lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
          if ((uVar5 & 1) == 0) goto LAB_71000452e0;
          lib::L2CValue::L2CValue((L2CValue *)&local_d0,2);
          lib::L2CValue::operator=((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_d0);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_d0,1);
          lib::L2CValue::operator=((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_d0);
        }
        goto LAB_71000452d8;
      }
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1a);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.1);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_d0,pLVar7);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      if ((uVar5 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.1);
        uVar5 = lib::L2CValue::operator<(pLVar8,(L2CValue *)&local_d0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
        if ((uVar5 & 1) == 0) goto LAB_71000452e0;
        lib::L2CValue::L2CValue((L2CValue *)&local_d0,1);
        lib::L2CValue::operator=((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_d0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_d0,2);
        lib::L2CValue::operator=((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_d0);
      }
LAB_71000452d8:
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    }
LAB_71000452e0:
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,1);
    uVar5 = lib::L2CValue::operator==((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,2);
      uVar5 = lib::L2CValue::operator==((L2CValue *)(auStack272 + 0x10),(L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_d0);
        lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_TURN_TIME);
          fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
          lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN)
          ;
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN_REQUEST);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN_REQUEST);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
        }
        goto LAB_710004532c;
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN_REQUEST);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
LAB_710004532c:
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    }
    lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
    lib::L2CValue::~L2CValue(aLStack240);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) == 0) goto LAB_7100045b84;
  lib::L2CValue::L2CValue((L2CValue *)auStack272,1);
  lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,0x128edf2af9);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack320 + 0x10));
  pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack320);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar5,(ulong)pLVar8);
  lib::L2CValue::L2CValue(aLStack288,iVar3);
  lib::L2CAgent::math_max((L2CAgent *)auStack272,aLStack288,pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,1.0);
  lib::L2CValue::operator/((L2CValue *)&local_d0,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  fVar11 = (float)app::lua_bind::SlowModule__rate_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar11);
  lib::L2CValue::operator*(aLStack240,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue((L2CValue *)auStack320);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_TURN_TIME);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
  app::lua_bind::WorkModule__add_float_impl(*ppBVar10,fVar11,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_TURN_TIME);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar11);
  lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::~L2CValue(aLStack240);
  fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack240,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),25.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,1.0);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_d0,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,true);
    uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) != 0) goto LAB_7100045620;
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.5);
    lib::L2CValue::operator/(aLStack112,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,1.0);
    uVar5 = lib::L2CValue::operator<(aLStack112,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,1.0);
      lib::L2CValue::operator-(aLStack112,(L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,2.0);
      lib::L2CValue::operator-(aLStack112,(L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::operator*(aLStack112,(L2CValue *)auStack320);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,1.0);
      lib::L2CValue::operator-((L2CValue *)(auStack320 + 0x10),(L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,-0.5);
      lib::L2CValue::operator*((L2CValue *)&local_d0,aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)auStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
      pLVar8 = (L2CValue *)auStack320;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.5);
      lib::L2CValue::operator*((L2CValue *)&local_d0,aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::operator*(aLStack288,aLStack112);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)auStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      pLVar8 = aLStack288;
    }
    lib::L2CValue::~L2CValue(pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,-180.0);
    lib::L2CValue::operator*((L2CValue *)&local_d0,aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    fVar11 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar11);
    lib::L2CValue::operator*(aLStack288,(L2CValue *)&local_d0);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,90.0);
    ppBVar9 = &local_d0;
    lib::L2CValue::operator/(aLStack144,(L2CValue *)ppBVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CAgent::math_abs((L2CAgent *)auStack320,(L2CValue *)ppBVar9);
    lib::L2CValue::operator*((L2CValue *)(auStack272 + 0x10),(L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator+(aLStack288,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_TURN_ANGLE);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack272);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack320 + 0x10));
    ppBVar9 = (BattleObjectModuleAccessor **)auStack320;
  }
  else {
LAB_7100045620:
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) == 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar10);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar10);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack272,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_TURN_ANGLE);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack272);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar10,fVar11,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,false);
    uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack272,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN_REQUEST);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack272);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
      lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0.0);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_d0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_CHANGE_LR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_TURN_END);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar3);
    ppBVar9 = &local_d0;
  }
  lib::L2CValue::~L2CValue((L2CValue *)ppBVar9);
  uVar5 = lib::L2CValue::as_number(aLStack128);
  lVar13 = lib::L2CValue::as_number(aLStack144);
  uVar12 = lib::L2CValue::as_number(aLStack160);
  local_d0 = (BattleObjectModuleAccessor *)(uVar5 & 0xffffffff | lVar13 << 0x20);
  uStack200 = (ulong)uVar12;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar10,(Vector3f *)&local_d0,0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack112);
LAB_7100045b84:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

