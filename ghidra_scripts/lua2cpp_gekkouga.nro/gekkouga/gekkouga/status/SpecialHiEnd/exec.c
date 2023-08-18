
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialHiEnd_exec(L2CFighterGekkouga *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  L2CValue aLStack496 [16];
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
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue(aLStack352,0);
  lib::L2CValue::L2CValue(aLStack368,0);
  lib::L2CValue::L2CValue(aLStack384,0);
  lib::L2CValue::L2CValue(aLStack400,0);
  lib::L2CValue::L2CValue(aLStack416,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_PHASE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  ppBVar8 = &this->moduleAccessor;
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar4 = lib::L2CValue::operator__(aLStack320,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Z);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_X);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_Z);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_X);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::operator_(aLStack288,aLStack128);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::operator_(aLStack384,aLStack128);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_ADD_ROT_Z);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::operator_(aLStack416,aLStack128);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_X)
    ;
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack384,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Y)
    ;
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_ROT_Z)
    ;
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    uVar4 = lib::L2CValue::as_number(aLStack288);
    lVar14 = lib::L2CValue::as_number(aLStack384);
    uVar10 = lib::L2CValue::as_number(aLStack416);
    local_70 = uVar4 & 0xffffffff | lVar14 << 0x20;
    uStack104 = (ulong)uVar10;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar8,HVar5,(Vector3f *)&local_70,0,0);
    lib::L2CValue::_L2CValue(aLStack128);
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,9.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
    uVar4 = lib::L2CValue::operator__(aLStack320,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,0);
      lib::L2CValue::L2CValue(aLStack144,0);
      lib::L2CValue::L2CValue(aLStack160,0);
      lib::L2CValue::L2CValue(aLStack176,0);
      lib::L2CValue::L2CValue(aLStack192,0);
      lib::L2CValue::L2CValue(aLStack208,0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack240,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_COUNT);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)auStack240);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,2);
      uVar4 = lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) == 0) {
LAB_7100010bdc:
        lib::L2CValue::L2CValue(aLStack464,false);
      }
      else {
        fVar9 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        fVar9 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::operator_(aLStack128,aLStack128);
        lib::L2CValue::operator_(aLStack208,aLStack208);
        pLVar6 = aLStack272;
        lib::L2CValue::operator_(aLStack256,pLVar6);
        lib::L2CAgent::math_sqrt((L2CAgent *)auStack240,pLVar6);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)auStack240);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue((L2CValue *)auStack240,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack256,0xaca5b425b);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack240);
        uVar7 = lib::L2CValue::as_integer(aLStack256);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
        uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue((L2CValue *)auStack240);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack272,0xbf4395f5c);
          uVar4 = lib::L2CValue::as_integer(aLStack256);
          uVar7 = lib::L2CValue::as_integer(aLStack272);
          iVar2 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar4,uVar7);
          lib::L2CValue::L2CValue((L2CValue *)auStack240,iVar2);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
          uVar4 = lib::L2CValue::operator__((L2CValue *)auStack240,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((uVar4 & 1) == 0) goto LAB_7100010bdc;
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack240,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack240);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack240,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack240);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
          fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
          fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue(aLStack464,true);
        }
        else {
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack240,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack240);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
          lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack240,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack240);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar8,iVar2);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
          lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          fVar9 = (float)lib::L2CValue::as_number(aLStack176);
          fVar11 = (float)lib::L2CValue::as_number(aLStack144);
          fVar12 = (float)lib::L2CValue::as_number(aLStack128);
          fVar13 = (float)lib::L2CValue::as_number(aLStack208);
          fVar9 = (float)app::sv_math::vec2_angle(fVar9,fVar11,fVar12,fVar13);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
          lib::L2CValue::operator_((L2CValue *)(auStack240 + 0x10),(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue(aLStack256,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack272,0xbf4395f5c);
          uVar4 = lib::L2CValue::as_integer(aLStack256);
          uVar7 = lib::L2CValue::as_integer(aLStack272);
          uVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar8,uVar4,uVar7);
          pLVar6 = (L2CValue *)(uVar4 & 0xffffffff);
          lib::L2CValue::L2CValue((L2CValue *)auStack240,(int)pLVar6);
          lib::L2CAgent::math_rad((L2CAgent *)auStack240,pLVar6);
          uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)(auStack240 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::_L2CValue(aLStack272);
          lib::L2CValue::_L2CValue(aLStack256);
          if ((uVar4 & 1) == 0) goto LAB_7100010bdc;
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
          fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_70,
                     _FIGHTER_GEKKOUGA_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
          fVar9 = (float)lib::L2CValue::as_number((L2CValue *)auStack240);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar8,fVar9,iVar2);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)auStack240);
          lib::L2CValue::L2CValue(aLStack464,true);
        }
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack464);
      lib::L2CValue::_L2CValue(aLStack464);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack480,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_HI_LOOP);
        lib::L2CValue::L2CValue(aLStack496,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100010f2c;
      }
    }
    lib::L2CValue::L2CValue(aLStack128,0xba18057d9);
    lib::L2CValue::L2CValue(aLStack144,0);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack400,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::operator_(aLStack400);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    app::sv_kinetic_energy::set_accel(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack128,0x1220fc2660);
    lib::L2CValue::L2CValue(aLStack144,0);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
    lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack160,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack176,0x968a0fda6);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar7);
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    lib::L2CValue::operator_(aLStack336,aLStack144);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar8,iVar2);
    lVar14 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack432,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack448,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    lVar14 = lib::L2CValue::as_number(aLStack160);
    uVar10 = lib::L2CValue::as_number(aLStack176);
    local_70 = uVar4 & 0xffffffff | lVar14 << 0x20;
    uStack104 = (ulong)uVar10;
    app::lua_bind::ModelModule__set_joint_rotate_impl(*ppBVar8,HVar5,(Vector3f *)&local_70,0,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lVar14 = -0x70;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar14));
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_GEKKOUGA_STATUS_WORK_ID_INT_QUICK_ATTACK_PHASE);
  iVar2 = lib::L2CValue::as_integer(aLStack320);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100010f2c:
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  return;
}

