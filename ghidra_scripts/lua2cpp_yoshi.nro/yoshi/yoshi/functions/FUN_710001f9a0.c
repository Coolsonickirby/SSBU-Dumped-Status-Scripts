
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f9a0(void *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CAgent *this;
  ulong *this_00;
  void *pvVar11;
  KineticEnergyNormal *pKVar12;
  FighterKineticEnergyGravity *pFVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  undefined8 uVar16;
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  ulong local_140;
  undefined8 uStack312;
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
  ulong auStack96 [2];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x128f9a3104);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  ppBVar14 = (BattleObjectModuleAccessor **)((long)param_1 + 0x40);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack128,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0xe16af1eb2);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack144,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0xf91c8f5ae);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack160,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0xf86b3e1ed);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack176,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x10e296f334);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack192,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0xa7e5bc90c);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack208,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x8fd9b92dd);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack224,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,0xfea97fe73);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0xae7a10db6);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack240,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(param_1,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
  lib::L2CValue::operator=(pLVar10,aLStack304);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack336,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack352,fVar15);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar14);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_SITUATION_KIND_GROUND);
  bVar1 = lib::L2CValue::operator==((L2CValue *)auStack96,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue(aLStack368,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue(aLStack384,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,1.0);
  uVar7 = lib::L2CValue::operator==(aLStack352,(L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack96,_GROUND_TOUCH_FLAG_LEFT);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack384);
    if ((bVar2 & 1U) == 0) goto LAB_710001ff7c;
    lib::L2CValue::L2CValue(aLStack416,_GROUND_TOUCH_FLAG_LEFT);
    FUN_7100020bc0(param_1,aLStack416);
    pLVar9 = aLStack416;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack96,GROUND_TOUCH_FLAG_RIGHT);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_140,(bool)(bVar1 & 1));
    lib::L2CValue::operator=(aLStack384,(L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack384);
    if ((bVar2 & 1U) == 0) goto LAB_710001ff7c;
    lib::L2CValue::L2CValue(aLStack400,GROUND_TOUCH_FLAG_RIGHT);
    FUN_7100020bc0(param_1,aLStack400);
    pLVar9 = aLStack400;
  }
  lib::L2CValue::~L2CValue(pLVar9);
LAB_710001ff7c:
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack384);
  if ((bVar2 & 1U) == 0) {
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack368);
    if ((bVar2 & 1U) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      pLVar10 = aLStack176;
      lib::L2CValue::operator*(pLVar9,pLVar10);
      lib::L2CAgent::math_abs((L2CAgent *)auStack96,pLVar10);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
      uVar7 = lib::L2CValue::operator<(pLVar9,aLStack192);
      if ((uVar7 & 1) == 0) {
        FUN_710000dc80(param_1);
        lib::L2CValue::L2CValue(aLStack464,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x30);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,GROUND_CORRECT_KIND_AIR);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_140);
        app::lua_bind::GroundModule__set_correct_impl(*ppBVar14,GVar6);
        this_00 = &local_140;
      }
      else {
        lib::L2CValue::L2CValue(aLStack432,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(param_1,(L2CValue)0x50);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,GROUND_CORRECT_KIND_GROUND);
        GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_140);
        app::lua_bind::GroundModule__set_correct_impl(*ppBVar14,GVar6);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
        lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        pLVar9 = (L2CValue *)0x18cdc1683;
        this = (L2CAgent *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        lib::L2CAgent::math_abs(this,pLVar9);
        lib::L2CValue::L2CValue((L2CValue *)&local_140,0.01);
        uVar7 = lib::L2CValue::operator<((L2CValue *)auStack96,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)auStack96);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_140,0.01);
          lib::L2CValue::operator*((L2CValue *)&local_140,aLStack352);
          lib::L2CValue::~L2CValue((L2CValue *)&local_140);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
          lib::L2CValue::operator=(pLVar9,(L2CValue *)auStack96);
          lib::L2CValue::~L2CValue((L2CValue *)auStack96);
        }
        pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
        lib::L2CValue::operator=(aLStack336,pLVar9);
        fVar15 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar14);
        lib::L2CValue::L2CValue((L2CValue *)auStack96,fVar15);
        lib::L2CAgent::math_abs((L2CAgent *)auStack96,pLVar9);
        uVar7 = lib::L2CValue::operator<(aLStack240,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_140,0.0);
          uVar7 = lib::L2CValue::operator<((L2CValue *)&local_140,(L2CValue *)auStack96);
          lib::L2CValue::~L2CValue((L2CValue *)&local_140);
          bVar2 = (uVar7 & 1) == 0;
          if (bVar2) {
            lib::L2CValue::L2CValue(aLStack448,1.0);
            lib::L2CValue::operator-(aLStack448);
          }
          else {
            lib::L2CValue::L2CValue(aLStack112,1.0);
          }
          pLVar9 = aLStack112;
          lib::L2CValue::operator=(aLStack352,pLVar9);
          lib::L2CValue::~L2CValue(aLStack112);
          if (bVar2) {
            lib::L2CValue::~L2CValue(aLStack448);
          }
          lib::L2CAgent::math_abs((L2CAgent *)auStack96,pLVar9);
          lib::L2CValue::operator*(aLStack112,aLStack160);
          lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_140);
          lib::L2CValue::~L2CValue((L2CValue *)&local_140);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::operator*(aLStack336,aLStack352);
          pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
          lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
          lib::L2CValue::~L2CValue((L2CValue *)&local_140);
          fVar15 = (float)lib::L2CValue::as_number(aLStack352);
          app::lua_bind::PostureModule__set_lr_impl(*ppBVar14,fVar15);
          app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar14);
        }
        this_00 = auStack96;
      }
      lib::L2CValue::~L2CValue((L2CValue *)this_00);
      lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_LOOP);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack96);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      lib::L2CValue::operator=(aLStack336,aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack112,0xbb12af023);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar7,uVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_140,fVar15);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      uVar4 = app::lua_bind::ControlModule__get_flick_no_reset_x_impl(*ppBVar14);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,uVar4 & 0xff);
      uVar7 = lib::L2CValue::operator<((L2CValue *)auStack96,(L2CValue *)&local_140);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack480,false);
      }
      else {
        lib::L2CValue::L2CValue(aLStack480,true);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack480);
      lib::L2CValue::~L2CValue(aLStack480);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::operator*(aLStack336,aLStack224);
        lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_140);
        lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      }
      lib::L2CValue::operator*(aLStack336,aLStack352);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
      lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
      lib::L2CValue::L2CValue((L2CValue *)&local_140,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_SCALE_INDEX);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack96);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar5);
      lib::L2CValue::~L2CValue((L2CValue *)auStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_S_END);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack96,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    lib::L2CValue::operator-(aLStack128);
    lib::L2CValue::operator*(pLVar9,(L2CValue *)auStack96);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
    lib::L2CValue::operator=(pLVar9,(L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)&local_140);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
    lib::L2CValue::operator=(pLVar9,aLStack144);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_SPEED);
  fVar15 = (float)lib::L2CValue::as_number(aLStack336);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_140);
  pvVar11 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,pvVar11);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar7 = lib::L2CValue::as_number(pLVar9);
  uVar4 = lib::L2CValue::as_number(aLStack112);
  local_140 = uVar7 & 0xffffffff | (ulong)uVar4 << 0x20;
  uStack312 = 0;
  pKVar12 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)auStack96);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar12,(Vector2f *)&local_140);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  pvVar11 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_140,pvVar11);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack256,0x1fbdb2615);
  fVar15 = (float)lib::L2CValue::as_number(pLVar9);
  pFVar13 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)&local_140);
  app::lua_bind::FighterKineticEnergyGravity__set_speed_impl(pFVar13,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)&local_140);
  lib::L2CValue::~L2CValue((L2CValue *)auStack96);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

